#include "vector3.h"

Vector3::Vector3(){
    this->x = 0.0f;
    this->y = 0.0f;
    this->z = 0.0f;
}

Vector3::Vector3(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}

float Vector3::Lenght() const{
    return std::sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

float Vector3::SqrLenght() const{
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

Vector3 Vector3::operator*(float s) const{
    return Vector3(this->x * s, this->y * s, this->z * s);
}

Vector3 Vector3::operator/(float s) const{
    return Vector3(this->x / s, this->y / s, this->z / s);
}

std::ostream& operator<<(std::ostream& cout, Vector3 v){
    cout<<"x: "<<v.x<<"\ny: "<<v.y<<"\nz: "<<v.z<<std::endl;
    return cout;
}
