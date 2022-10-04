#include "point3.h"

Point3::Point3(){
    this->x = 0.0f;
    this->y = 0.0f;
    this->z = 0.0f;
}

Point3::Point3(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
}

Point3 Point3::AddVector(const Vector3 v){
    return Point3(this->x + v.x, this->y + v.y, this->z + v.z);
}

std::ostream& operator<<(std::ostream& cout, Point3 p){
    cout<<"x: "<<p.x<<"\ny: "<<p.y<<"\nz: "<<p.z<<std::endl;
    return cout;
}