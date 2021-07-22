//
// Created by User on 2021/6/1.
//

#ifndef OOP_HW06_SHAPE_H
#define OOP_HW06_SHAPE_H
#include <string>
#include <iostream>
using namespace std;
class Shape {
private:
    string color;
public:
    Shape(const string &);
    ~Shape()=default;
    virtual void print();
    virtual double get_area() = 0;
};


#endif //OOP_HW06_SHAPE_H
