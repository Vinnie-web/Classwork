// Vincent Muriithi
// BSE-05-0159/2024
// Program to call a class

#include <iostream>
using namespace std;

class Employee {
private:
    string idno;
    string name;
    string occupation;

public:
    void getDetails() {
        cout << "Enter ID number: ";
        getline(cin, idno);
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter occupation: ";
        getline(cin, occupation);
    }

    void display() {
        cout << "\nEmployee Details:" << endl;
        cout << "ID Number: " << idno << endl;
        cout << "Name: " << name << endl;
        cout << "Occupation: " << occupation << endl;
    }
};

int main() {
    Employee zu_emp;

    zu_emp.getDetails();
    zu_emp.display();

    return 0;
}
