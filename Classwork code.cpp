/*
Vincent Muriithi
BSE-05-0159/2024
Program to understand the use of functions in C++
05-06-2025
*/
// Functions: User defined, User defined
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

// Function prototype only if function comes after the main function
int product(int x, int y);
float division(float a, float b);

// Function definition (before main, so no prototype needed)
int addition(int c, int d) {
    return c + d;
}

int main() {
    int sum, mul, num1, num2;
    float div;

    cout << "We're gettin somewhere now :)" << endl;

    // Calling functions needs arguments
    cout << "Enter your two numbers" << endl;
    cin >> num1 >> num2;

    sum = addition(num1, num2);
    cout << "I'm now calling the Addition Function: " << sum << endl;

    mul = product(10, 30);
    cout << "I'm now calling the Multiplication Function: " << mul << endl;

    div = division(300, 10);
    cout << "I'm now calling the Division Function: " << div << endl;

    system("pause");
    return 0;
}

// Function definitions after main
int product(int x, int y) {
    return x * y;
}

float division(float a, float b) {
    return a / b;
}
