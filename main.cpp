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

float DotProduct(const Vector3& a, const Vector3& b){
    return a.x * b.x + a.y * b.y + a.z * b.z; 
}

int main(){
    Vector3 v1 (0, 3, 4);
    Vector3 v2 (2, 1, -2);
    float dotProduct = DotProduct(v1, v2);
    std::cout<<"Dot product or scalar product between two vectors: "<<dotProduct;
    return 0;
}