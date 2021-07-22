//
// Created by User on 2021/6/1.
//

#include "Rectangle.h"
Rectangle::Rectangle(const string& string, const int &height,const int &width)
:Shape(string){
    cout<<"constructor in Rectangle"<<endl;
    this->height = height;
    this->width = width;
}
void Rectangle::print(){
    Shape::print();
    cout<<" Rectangle, height "<<this->height<<", width "<<this->width<<", area "<<get_area()<<endl;
}
double Rectangle::get_area() {
    return this->height*this->width;
}