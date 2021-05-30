#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Shape.h"
class Rectangle : public Shape {
private:
    int height;
    int width;
public:
    Rectangle(const string&, int, int);
    ~Rectangle();
    void print();
    double get_area();
};

#endif // _RECTANGLE_H_