const form = document.getElementById('prediction-form');
const inputValues = document.getElementById('input-values');
const resultDiv = document.getElementById('result');

form.addEventListener('submit', (e) => {
  e.preventDefault();
  const inputValue = inputValues.value;
  const xhr = new XMLHttpRequest();
  xhr.open('POST', '/predict', true);
  xhr.setRequestHeader('Content-Type', 'application/json');
  xhr.send(JSON.stringify({ inputValues: inputValue }));

  xhr.onload = function() {
    if (xhr.status === 200) {
      const response = JSON.parse(xhr.responseText);
      resultDiv.innerText = response.result;
    } else {
      resultDiv.innerText = 'Error: '; xhr.statusText;
    }
  };
});