#ifndef KOLO_H
#define KOLO_H

#define _USE_MATH_DEFINES

#include "figura.h"
#include <cmath>
#include <iostream>

class kolo : public figure 
{
public:
    kolo() : kolo(0) {}
    kolo(double r) : promien(r) { pole = M_PI * promien * promien; }

    void id() 
    { 
        cout << "kolo o polu " << pole << endl; 
    }

private:
    double promien;

};

#endif // !KOLO_H
