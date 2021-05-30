#include "Circle.h"
#define PI 3.14159265359

Circle::Circle(const string &clr, int rad) :
    Shape(clr), radius(rad)
{
    cout << "Constructing Circle..." << endl;
}

Circle::~Circle() {
    cout << "Destructing Circle..." << endl;
}

void Circle::print() {
    Shape::print();
    cout << " circle, "
         << "radius " << radius << ", "
         << "area " << get_area() << endl;
}

double Circle::get_area() {
    return PI * radius * radius;
}