//
// Created by User on 2021/6/1.
//

#include "Triangle.h"
Triangle::Triangle(const string &string, const int &height, const int &base)
:Shape(string){
    cout<<"constructor in Triangle"<<endl;
    this->height = height;
    this->base = base;
}
void Triangle::print(){
    Shape::print();
    cout<<" Triangle, height "<<this->height<<", base "<<this->base<<", area "<<get_area()<<endl;
}
double Triangle::get_area() {
    return 0.5*this->height*this->base;
}