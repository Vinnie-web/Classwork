#include<iostream>
using namespace std;

/*
    Name:Vincent Muriithi
    Description:Grading system program
    BSE-05-0159/2024
    
*/



int main() {
    float mark1, mark2, mark3, average;

    // Prompt the user to enter marks for 3 subjects
    cout << "Enter marks for subject 1: ";
    cin >> mark1;

    cout << "Enter marks for subject 2: ";
    cin >> mark2;

    cout << "Enter marks for subject 3: ";
    cin >> mark3;

    // Calculate average
    average = (mark1 + mark2 + mark3) / 3;

    // Display average
    cout << "Average score: " << average << endl;

    // Determine and display grade
    if (average >= 70 && average <= 100) {
        cout << "Grade: A" << endl;
    } else if (average >= 60) {
        cout << "Grade: B" << endl;
    } else if (average >= 50) {
        cout << "Grade: C" << endl;
    } else if (average >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E (Fail)" << endl;
    }

    return 0;
}
