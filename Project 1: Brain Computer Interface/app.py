from flask import Flask, request, jsonify
import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn import svm
from sklearn.metrics import accuracy_score

app = Flask(__name__)

# Load your data here
parkinsons_data = pd.read_csv('parkinsons.csv')
X = parkinsons_data.drop(columns=['name', 'status'], axis=1)
Y = parkinsons_data['status']

# Split the data into training and testing sets
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2, random_state=2)

# Initialize the StandardScaler object
scaler = StandardScaler()
# Fit the scaler to the training data
scaler.fit(X_train)

# Transform the training and testing data using the fitted scaler
X_train = scaler.transform(X_train)
X_test = scaler.transform(X_test)

# Initialize and train the SVM model
model = svm.SVC(kernel='linear')
model.fit(X_train, Y_train)

@app.route('/predict', methods=['POST'])
def predict():
    data = request.get_json(force=True)
    input_data = np.array(list(data.values()))
    input_data_reshaped = input_data.reshape(1, -1)
    std_data = scaler.transform(input_data_reshaped)
    prediction = model.predict(std_data)
    response = jsonify(prediction[0])
    return response

if __name__ == '__main__':
    app.run(port=5000, debug=True)