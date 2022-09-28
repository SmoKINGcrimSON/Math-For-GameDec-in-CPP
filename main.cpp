#include <iostream>
#include "headers.h"

Vector2 operator-(const Point2 p1, const Point2 p2){
    return Vector2(p1.x - p2.x, p1.y - p2.y);
}

int main(){
    std::cout<<"---------------------------------------"<<std::endl;
    std::cout<<"\n\tPoints and vectors-transform point position (P')"<<std::endl;
    Point2 p1(1.0f, 0.0f);
    Vector2 v2(2.0f, 3.0f);
    Point2 pPrime = p1 + v2;
    std::cout<<"p1:\n"<<p1<<"\nv2:\n"<<v2<<"\np1':\n"<<pPrime;
    std::cout<<"---------------------------------------"<<std::endl;
    std::cout<<"\n\tFind vector that points p1 to p2 (p2 to p1)"<<std::endl;
    Point2 pacman(0, -1);
    Point2 inky(1, 1);
    Vector2 inkyFollowPacman = pacman - inky;
    std::cout<<"Pacma to inky vector:\n"<<inkyFollowPacman<<std::endl;
    std::cout<<"---------------------------------------"<<std::endl;
    return 0;
}