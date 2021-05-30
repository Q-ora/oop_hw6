#include "Rectangle.h"

Rectangle::Rectangle(const string &clr, int h, int w) :
    Shape(clr), height(h), width(w)
{
    cout << "Constructing Rectangle..." << endl;
}

Rectangle::~Rectangle() {
    cout << "Destructing Rectangle..." << endl;
}

void Rectangle::print() {
    Shape::print();
    cout << " rectangle, "
         << "height " << height << ", "
         << "width " << width << ", "
         << "area " << get_area() << endl;
}

double Rectangle::get_area() {
    return (double)(height * width);
}