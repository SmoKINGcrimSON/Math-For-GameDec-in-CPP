#include <iostream>
#include "headers.h"

//2D
Vector2 operator-(const Point2 p1, const Point2 p2){
    return Vector2(p1.x - p2.x, p1.y - p2.y);
}

float DotProduct(const Vector2& v1, const Vector2& v2){
    float dotproduct = (v1.x * v2.x) + (v1.y * v2.y);
    return dotproduct;
}

//3D

int main(){
    Point3 p(1, 0, 1);
    Vector3 v(2, 3, 4);
    Point3 pPrime = p.AddVector(v);
    std::cout<<pPrime;
    return 0;
}