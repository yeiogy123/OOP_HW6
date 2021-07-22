//
// Created by User on 2021/6/1.
//

#ifndef OOP_HW06_CIRCLE_H
#define OOP_HW06_CIRCLE_H
#include "Shape.h"

class Circle : public Shape{
private:
    int radius;
public:
    Circle(const string&,const int &radius);
    void print() override;
    double get_area() override;
};


#endif //OOP_HW06_CIRCLE_H
