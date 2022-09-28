#include "point2.h"

Point2::Point2(){
    this->x = 0.0f;
    this->y = 0.0f;
}

Point2::Point2(float x, float y){
    this->x = x;
    this->y = y;
}

Point2 Point2::operator+(Vector2 v2){
    return Point2(this->x + v2.x, this->y + v2.y);
}

std::ostream& operator<<(std::ostream& cout, const Point2& p){
    cout<<"x: "<<p.x<<"\ny: "<<p.y<<std::endl;
    return cout;
}