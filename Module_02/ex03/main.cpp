//
// Created by Darkside Morty on 1/31/22.
//

#include "Point.hpp"

int main( void ) {
    Point a(-10, -10);
    Point b(-0.5f, -11.2f);
    Point c(-1, 1);
    Point point(1, -2);
    std::cout << point.bsp(a, b, c, point) << std::endl;
    return 0;
}