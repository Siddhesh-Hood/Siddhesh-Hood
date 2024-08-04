/* 
Step1:  Undertand the problem statement
Step2:  Write the algorithm
Step3:  Decide the programming language
Step4:  Write the program
Step5:  Test the program
*/

//
// Problem Statement: Accept 2  numbers as input from user and print their sum.
//

//  Step 1: Understand the problem statement
//  We conclude that the 2  numbers should be floating format



// Step 2: Write the Algorithm
/*
START 
Accept first number from user and consider it as Nol
Accept second number from user and consider it as No2
Create one variable to store the answer as Ans
Perform the addition of Nol and No2
Store the result into Ans
Display the value of Ans as a result
STOP 
*/


//Step3: Decide the programming language
// We are going to use c programming language 


// Step 4: Write The Program

#include <stdio.h>


/////////////////////////////////////////////////////////////////////
//
//Function Name : Addition
//Description :  It is used to perfprm addition of 2 floats
//Input: Float,Float
//Output: Float
//Author: Siddhesh Pramod Hood
//Date: 15/04/2024
//
///////////////////////////////////////////////////////////////////

float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

/////////////////////////////////////////////////////////////////////
//
//Function Name : main
//Description :  It is entry point function
//
/////////////////////////////////////////////////////////////////////

int main()
{ 
    float fValue1=0.0,  fValue2=0.0;
    float fResult=0.0;



    printf("ENTER FIRST NUMBER : \n");
    scanf("%f", &fValue1);

    printf("ENTER SECOND NUMBER: \n");
    scanf("%f", &fValue2);
     
     fResult= Addition(fValue1 , fValue2);

     printf("Addition is : %f\n",fResult);

    return 0;
}
//Step 5: Test the program
// Test case
// Input 1 = 10.0 Input 2 = 20.0 Result = 30.0
// Input 1 = 10.0 Input 2 = 0.0 Result = 10.0
// Input 1 = 0.0 Input 2 = 10.0 Result = 10.0
// Input 10.0 Input 2 = 0.0 Result = 0.0
// Input 1 10.0 Input 2 = -7.0 Result 3.0
// Input 1-10.0 Input 2 = -7.0. Result = -17.0