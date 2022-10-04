#ifndef VECTOR3_H
#define VECTOR3_H
#include <iostream>
#include "math.h"

class Vector3{
    public:
        float x, y, z;
        Vector3();
        Vector3(float, float, float);
        float Lenght() const;
        float SqrLenght() const;
        Vector3 operator*(float) const;
        Vector3 operator/(float) const;
};

extern std::ostream& operator<<(std::ostream&, Vector3);
#include "vector3.tpp"
#endif