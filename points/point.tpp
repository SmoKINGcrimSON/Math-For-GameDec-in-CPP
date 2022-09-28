#include "point.h"

Point::Point(){
    this->x = 0.0f;
    this->y = 0.0f;
}

Point::Point(float x, float y){
    this->x = x;
    this->y = y;
}

Point Point::operator+(Vector2 v2){
    return Point(this->x + v2.x, this->y + v2.y);
}

std::ostream& operator<<(std::ostream& cout, const Point& p){
    cout<<"x: "<<p.x<<"\ny: "<<p.y<<std::endl;
    return cout;
}