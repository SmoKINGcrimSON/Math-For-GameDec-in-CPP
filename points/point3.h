#ifndef POINT3_H
#define POINT3_H
#include "../vectors/vector3.h"
#include <iostream>

class Point3{
    public:
        float x, y, z;
        Point3();
        Point3(float, float, float);
        Point3 AddVector(const Vector3);
};

extern std::ostream& operator<<(std::ostream&, Point3);
#include "point3.tpp"
#endif