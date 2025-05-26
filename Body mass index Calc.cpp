/*
    Name:Vincent Muriithi
    Description:Program to calculate body mass index
    BSE-05-0159/2024
*/

#include<iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    // Prompt the user for weight and height
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    cout << "Your BMI is: " << bmi << endl;

    // Classify and display the category
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}
