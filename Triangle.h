#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include "Shape.h"
class Triangle : public Shape {
private:
    int height;
    int base;
public:
    Triangle(const string&, int, int);
    ~Triangle();
    void print();
    double get_area();
};

#endif // _TRIANGLE_H_