//
// Created by User on 2021/6/1.
//

#ifndef OOP_HW06_TRIANGLE_H
#define OOP_HW06_TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape {
private:
    int height;
    int base;
public:
    Triangle(const string &string,const int &height, const int &base);
    void print() override;
    double get_area() override;
};


#endif //OOP_HW06_TRIANGLE_H
