//
// Created by Darkside Morty on 1/31/22.
//

#include "Point.hpp"

Point::Point(void) : x(), y() {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(const Point &a) {
    *this = a;
}

Fixed Point::getX() {
    return (this->x);
}

Fixed Point::getY() {
    return (this->y);
}

Point &Point::operator=(const Point &a) {
    this->x = a.x;
    this->y = a.y;
    return (*this);
}

Point::~Point() {}

bool Point::bsp(const Point a, const Point b, const Point c, const Point point) {
    float one = (a.x.toFloat() - point.x.toFloat()) * (b.y.toFloat() - a.y.toFloat()) - (b.x.toFloat() - a.x.toFloat()) * (a.y.toFloat() - point.y.toFloat());
    float two = (b.x.toFloat() - point.x.toFloat()) * (c.y.toFloat() - b.y.toFloat()) - (c.x.toFloat() - b.x.toFloat()) * (b.y.toFloat() - point.y.toFloat());
    float three = (c.x.toFloat() - point.x.toFloat()) * (a.y.toFloat() - c.y.toFloat()) - (a.x.toFloat() - c.x.toFloat()) * (c.y.toFloat() - point.y.toFloat());
    std::cout << one << std::endl << two << std::endl << three << std::endl;
    if ((one > 0 && two > 0 && three > 0) || (one < 0 && two < 0 && three <0))
        return (true);
    return (false);
}

