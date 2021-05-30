#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Shape.h"
class Circle : public Shape {
private:
    int radius;
public:
    Circle(const string&, int);
    ~Circle();
    void print(); // takes no argument and return nothing.
    // This method should call the base print() method to print the color, then print the word "circle" followed by the circle's radius and area.
    double get_area(); // takes no arguments and return the circle's area (double type) based on its radius.
};

#endif // _CIRCLE_H_