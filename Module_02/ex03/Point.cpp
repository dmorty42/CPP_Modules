//
// Created by Darkside Morty on 1/31/22.
//

#include "Point.hpp"

Point::Point(void) : x(), y() {
}

Point::Point(const float x, const float y) {
    this->x(x);
    this->y(y);
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
    float one = (a.x - point.x) * (b.y - a.y) - (b.x - a.x) * (a.y - point.y);
    float two = (b.x - point.x) * (c.y - b.y) - (c.x - b.x) * (b.y - point.y);
    float three = (c.x - point.x) * (a.y - c.y) - (a.x - c.x) * (c.y - point.y);
    if ((one > 0 && two > 0 && three > 0) || (one < 0 && two < 0 && three <0))
        return (true);
    return (false);
}

