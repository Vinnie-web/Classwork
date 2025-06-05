/*
Vincent Muriithi
BSE-05-0159/2024
Program to find the simple interest using functions
05-06-2025
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

float interest(int amount, float time, float rate) {
    return (amount * time * rate * 0.01);
}

int main() {
    int amm;
    float ti, ra, intr;

    cout << "Enter your Principal Amount, Time and Rate RESPECTIVELY: " << endl;
    cin >> amm >> ti >> ra;

    intr = interest(amm, ti, ra);
    cout << "The Simple Interest for your amount is: " << intr << endl;

    system("pause");
    return 0;
}
