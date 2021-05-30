#include "Shape.h"

Shape::Shape(const string &clr) :
    color(clr)
{
    cout << "Constructing Shape..." << endl;
}

Shape::~Shape() {
    cout << "Destructing Shape..." << endl;
}

void Shape::print() {
    cout << color;
}
