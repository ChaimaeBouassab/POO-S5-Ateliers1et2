#include <iostream>
#include "Point.h"

Point::Point(float _x, float _y) {
    x = _x;
    y = _y;
}

void Point::deplace(float dx, float dy) {
    x += dx;
    y += dy;
}

void Point::affiche() {
    std::cout << "Coordonnées du point : (" << x << ", " << y << ")" << std::endl;
}
