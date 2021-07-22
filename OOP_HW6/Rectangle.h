//
// Created by User on 2021/6/1.
//

#ifndef OOP_HW06_RECTANGLE_H
#define OOP_HW06_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape{
private:
    int height;
    int width;
public:
    Rectangle(const string&, const int &height, const int &width);
    void print() override;
    double get_area() override;
};


#endif //OOP_HW06_RECTANGLE_H
