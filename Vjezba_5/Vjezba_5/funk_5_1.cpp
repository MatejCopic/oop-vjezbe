#include <iostream>
#include <time.h> 
#include <cmath> 
#include "header_5.hpp"

using namespace std;

Point::Point(double x, double y, double z){
    setPoint(0, 10);
}

void Point::setPoint(double min, double max){
    this->x = (min + 1) + (((float)rand()) / (float)RAND_MAX) * (max - (min + 1));
    this->y = (min + 1) + (((float)rand()) / (float)RAND_MAX) * (max - (min + 1));
    this->z = (min + 1) + (((float)rand()) / (float)RAND_MAX) * (max - (min + 1));
}

double Point::distance2D(const Point p, const Point p2){
    double distance_x = pow(p2.x - p.x, 2);
    double distance_y = pow(p2.y - p.y, 2);
    double distance = sqrt(distance_x + distance_y);
    return distance;
}

double Point::distance3D(const Point p1, const Point p2){
    double distance_x = pow(p2.x - p1.x, 2);
    double distance_y = pow(p2.y - p1.y, 2);
    double distance_z = pow(p2.z - p1.z, 2);
    double distance = sqrt(distance_x + distance_y + distance_z);
    return distance;
}

void Point::printPoint(){
    cout << "(" << x << "," << y << "," << z << ")";
}