/*
    Name: Vincent Muriithi
    Description: Program to manage library members and book borrowing using object-oriented programming in C++
    BSE-05-0159/2024
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {}

    string getName() const {
        return name;
    }

    void setName(const string& newName) {
        name = newName;
    }
};

// Derived class
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(const string& n, int id)
        : Person(n), memberID(id), booksBorrowed(0) {}

    void borrowBook() {
        booksBorrowed++;
        cout << name << " borrowed a book. Total: " << booksBorrowed << endl;
    }

    void returnBook() {
        if (booksBorrowed > 0) {
            booksBorrowed--;
            cout << name << " returned a book. Total: " << booksBorrowed << endl;
        } else {
            cout << name << " has no books to return." << endl;
        }
    }

    int getBooksBorrowed() const {
        return booksBorrowed;
    }

    int getMemberID() const {
        return memberID;
    }
};

// Second derived class
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(const string& n, int id, double fee)
        : LibraryMember(n, id), membershipFee(fee) {}

    double getMembershipFee() const {
        return membershipFee;
    }

    void specialBorrow() {
        cout << getName() << " (Premium) enjoys a special borrow!" << endl;
        borrowBook();
    }
};

// Main function
int main() {
    LibraryMember m1("Alice", 101);
    m1.borrowBook();
    m1.borrowBook();
    m1.returnBook();

    cout << endl;

    PremiumMember p1("Bob", 202, 75.0);
    p1.specialBorrow();
    p1.borrowBook();

    cout << "\nBooks borrowed by " << m1.getName() << ": " << m1.getBooksBorrowed() << endl;
    cout << "Books borrowed by " << p1.getName() << ": " << p1.getBooksBorrowed() << endl;

    return 0;
}
