#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "../vectors/vector2.h"

class Point{
    public:
        Point();
        Point(float, float);
        float x, y;
        Point operator+(Vector2);
};

extern std::ostream& operator<<(std::ostream&, const Point&);
#include "point.tpp"
#endif