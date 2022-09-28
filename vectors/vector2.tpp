#include "vector2.h"

Vector2::Vector2(){
    this->x = 0.0f;
    this->y = 0.0f;
}

Vector2::Vector2(float x, float y){
    this->x = x;
    this->y = y;
}

float Vector2::Length() const{
    return std::sqrt((this->x * this->x) + (this->y * this->y));
}

float Vector2::LengthSqr() const{
    return (this->x * this->x) + (this->y * this->y);
}

std::ostream& operator<<(std::ostream& cout, const Vector2& v2){
    cout<<"v2-x: "<<v2.x<<"\nv2-y: "<<v2.y<<std::endl;
    return cout;
}