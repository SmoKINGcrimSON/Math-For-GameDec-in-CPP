#ifndef POINT_H2
#define POINT_H2
#include <iostream>
#include "../vectors/vector2.h"

class Point2{
    public:
        Point2();
        Point2(float, float);
        float x, y;
        Point2 operator+(Vector2);
};

extern std::ostream& operator<<(std::ostream&, const Point2&);
#include "point2.tpp"
#endif