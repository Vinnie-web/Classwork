/*
    Name: Vincent Muriithi
    Description: Program to demonstrate polymorphism using Shape classes
    BSE-05-0159/2024
*/

#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Base class
class Shape {
public:
    virtual void area() {
        cout << "Generic shape has no area defined." << endl;
    }

    virtual ~Shape() {}
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() override {
        cout << "Area of Rectangle: " << (length * width) << " sq units" << endl;
    }
};

// Circle class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void area() override {
        cout << "Area of Circle: " << (M_PI * radius * radius) << " sq units" << endl;
    }
};

// Main program
int main() {
    Shape* shape = nullptr;
    int choice;

    cout << "Choose Shape:\n1. Rectangle\n2. Circle\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        double l, w;
        cout << "Enter length and width: ";
        cin >> l >> w;
        shape = new Rectangle(l, w);
    } else if (choice == 2) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        shape = new Circle(r);
    } else {
        cout << "Invalid choice.\n";
        return 1;
    }

    shape->area();  // Polymorphic call
    delete shape;

    return 0;
}
