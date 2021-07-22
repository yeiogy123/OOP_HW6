//
// Created by User on 2021/6/1.
//

#include "Circle.h"
Circle::Circle(const string& input,const int &radius):Shape(input){
    cout<<"constructor in Circle"<<endl;
    this->radius = radius;
}
void Circle::print(){
    Shape::print();
    cout<<" circle, radius "<<this->radius<<", area "<<get_area()<<endl;
}
double Circle::get_area() {
    return this->radius * this->radius * 3.1415926;
}