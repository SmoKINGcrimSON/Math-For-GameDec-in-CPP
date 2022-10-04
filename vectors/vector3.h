#ifndef VECTOR3_H
#define VECTOR3_H
#include <iostream>

class Vector3{
    public:
        float x, y, z;
        Vector3();
        Vector3(float, float, float);
};

extern std::ostream& operator<<(std::ostream&, Vector3);
#include "vector3.tpp"
#endif