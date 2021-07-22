//
// Created by User on 2021/6/1.
//

#include "Shape.h"
Shape::Shape(const string & input){
    cout<<"constructor in Shape"<<endl;
    this->color = input;
}
void Shape::print(){
    cout <<this->color;
}