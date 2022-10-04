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

std::ostream& operator<<(std::ostream& cout, Vector3 v){
    cout<<"x: "<<v.x<<"\ny: "<<v.y<<"\nz: "<<v.z<<std::endl;
    return cout;
}