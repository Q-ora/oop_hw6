#include "Triangle.h"

Triangle::Triangle(const string &clr, int h, int b) :
    Shape(clr), height(h), base(b)
{
    cout << "Constructing Triangle..." << endl;
}

Triangle::~Triangle() {
    cout << "Destructing Triangle..." << endl;
}

void Triangle::print() {
    Shape::print();
    cout << " triangle, "
         << "height " << height << ", "
         << "base " << base << ", "
         << "area " << get_area() << endl;
}

double Triangle::get_area() {
    return (double)(height * base) / 2;
}