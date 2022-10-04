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

Vector3 operator-(const Point3 p1, const Point3 p2){
    return Vector3(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
}

int main(){
    Vector3 v(3, 4, 0);
    std::cout<<"Pac-man's initial speed: "<<v.Lenght()<<std::endl;
    Vector3 vD = v * 2;
    std::cout<<"Pac-man's double speed: "<<vD.Lenght()<<std::endl;
    Vector3 vH = v / 2;
    std::cout<<"Pac-man's halved speed: "<<vH.Lenght()<<std::endl;
    return 0;
}