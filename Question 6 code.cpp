#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    float hours, rate, grossPay, tax, netPay;

    cout << "Enter hours worked this week: ";
    cin >> hours;

    cout << "Enter hourly wage: ";
    cin >> rate;

    // Calculate gross pay with overtime
    if (hours > 40) {
        grossPay = 40 * rate + (hours - 40) * rate * 1.5;
    } else {
        grossPay = hours * rate;
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = 600 * 0.15 + (grossPay - 600) * 0.20;
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // Display results
    cout << "\nGross Pay: $" << grossPay << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net Pay: $" << netPay << endl;

    system("pause");
    return 0;
}
/*
Vincent Muriithi
BSE-05-0159/2024
Program to calculate the gross pay, taxes and net pay
*/