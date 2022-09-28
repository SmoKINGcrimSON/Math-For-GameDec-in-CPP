#ifndef VECTOR2_H
#define VECTOR2_H
#include <iostream>
#include <math.h>
#include "../points/point2.h"

class Vector2{
    public:
        float x, y;
        Vector2();
        Vector2(float, float);
        float Length() const;
        float LengthSqr() const;
        Vector2 operator*(float) const;
        Vector2 operator/(float) const;
        Vector2 operator+(const Vector2&) const;
        Vector2 operator-(const Vector2&) const;
        Vector2 Normalized() const;
};

extern std::ostream& operator<<(std::ostream&, const Vector2&);

#include "vector2.tpp"
#endif