#include <iostream>
#include <typeinfo>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    vector<Shape*> s;
    Shape *c1 = new Circle("blue", 2), *c2 = new Circle("red", 3);
    Shape *r1 = new Rectangle("yellow", 3, 4), *r2 = new Rectangle("green", 5, 6);
    Shape *t1 = new Triangle("black", 2, 4), *t2 = new Triangle("white", 7, 1);

    s.push_back(c1);
    s.push_back(r1);
    s.push_back(t1);
    s.push_back(c2);
    s.push_back(r2);
    s.push_back(t2);

    // first loop
    cout << "\n\nPrinting all shapes...\n" << endl;
    for(auto it=s.begin();it!=s.end();++it)
        (*it)->print();
    
    // second loop
    cout << "\n\nPrinting only circles...\n" << endl;
    for(auto it=s.begin();it!=s.end();++it)
        if( typeid(*(*it)) == typeid(Circle) )  // if the object is Circle
            (*it)->print();

    cout << "\n\n";
    // delete
    for(auto it=s.begin();it!=s.end();++it)
        delete *it;

    return 0;
}