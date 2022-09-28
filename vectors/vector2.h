#ifndef VECTOR2_H
#define VECTOR2_H
#include <iostream>
#include "../points/point2.h"

class Vector2{
    public:
        float x, y;
        Vector2();
        Vector2(float, float);
};

extern std::ostream& operator<<(std::ostream&, const Vector2&);

#include "vector2.tpp"
#endif