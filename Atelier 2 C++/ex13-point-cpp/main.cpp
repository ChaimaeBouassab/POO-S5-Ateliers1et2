#include <iostream>
#include "Point.h"

int main() {
    Point p(3.0, 4.0); 
    p.affiche(); 

    p.deplace(2.0, -1.0); 
    p.affiche(); 
    return 0;
}

