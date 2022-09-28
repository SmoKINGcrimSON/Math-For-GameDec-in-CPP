#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point{
    public:
        Point();
        Point(float, float);
        float x, y;
};

extern std::ostream& operator<<(std::ostream&, const Point&);
#include "point.tpp"
#endif