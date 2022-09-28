#include <iostream>
#include "headers.h"

int main(){
    std::cout<<"---------------------------------------"<<std::endl;
    Point p1(13.0f, -4.5f);
    Vector2 v2(-23.0f, 45.3f);
    Point pPrime = p1 + v2;
    std::cout<<"p1:\n"<<p1<<"\nv2:\n"<<v2<<"\np1':\n"<<pPrime;
    std::cout<<"---------------------------------------"<<std::endl;
    return 0;
}