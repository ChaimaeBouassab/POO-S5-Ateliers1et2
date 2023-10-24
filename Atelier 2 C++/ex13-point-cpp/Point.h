// Point.h
#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x;
    float y;

public:
    Point(float _x, float _y);
    void deplace(float dx, float dy);
    void affiche();
};

#endif 
