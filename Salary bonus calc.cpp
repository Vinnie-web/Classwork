/*
	Name:Vincent Muriithi
	BSE-O5-0159/2024
	DESCRIPTION:Program to calculate the salary bonus

*/


#include<iostream> // for cout, cin
using namespace std;

int main() {
    float salary, years_of_service, bonus, total_salary;

    cout << "Enter your salary: " << endl;
    cin >> salary;

    cout << "Enter years of service: " << endl;
    cin >> years_of_service;

    if (years_of_service > 10) {
        bonus = 0.1 * salary;
        total_salary = salary + bonus;
    } else if (years_of_service >= 6 && years_of_service <= 10) {
        bonus = 0.08 * salary;
        total_salary = salary + bonus;
    } else if (years_of_service < 6) {
        bonus = 0.05 * salary;
        total_salary = salary + bonus;
    }

    cout << "The net bonus is: " << bonus << endl;
    cout << "The total salary is: " << total_salary << endl;

    return 0;
}
