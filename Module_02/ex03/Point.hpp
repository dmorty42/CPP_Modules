//
// Created by Darkside Morty on 1/31/22.
//

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed x;
    Fixed y;
public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point &a);
    Point &operator=(const Point &a);
    ~Point();
    Fixed getX(void);
    Fixed getY(void);
    bool bsp(Point const a, Point const b, Point const c, Point const point);
};


#endif
