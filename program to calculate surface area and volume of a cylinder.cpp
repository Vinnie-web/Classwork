/*
    NAME: Vincent Muriithi
    REG NO: BSE-05-0159/2024
    DESCRIPTION: SIMPLE PROGRAM TO CALCULATE VOLUME AND SURFACE AREA OF A CYLINDER (USING FUNCTIONS)
*/

#include <iostream>
using namespace std;

// Constant for pi
const float pi = 3.14159;

// Function to calculate volume
float calculateVolume(float radius, float height) {
    return pi * radius * radius * height;
}

// Function to calculate surface area
float calculateSurfaceArea(float radius, float height) {
    return 2 * pi * radius * (radius + height);
}

int main() {
    float radius, height;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter height: ";
    cin >> height;

    cout << "\nVOLUME IS: " << calculateVolume(radius, height) << endl;
    cout << "SURFACE AREA IS: " << calculateSurfaceArea(radius, height) << endl;

    return 0;
}
