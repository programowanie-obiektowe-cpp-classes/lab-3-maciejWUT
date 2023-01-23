#ifndef KWADRAT_H
#define KWADRAT_H

#include "figura.h"

class kwadrat : public figure
{
public:
    kwadrat() : kwadrat(0) {}
    kwadrat(double x) : dlugosc_boku(x) { pole = dlugosc_boku * dlugosc_boku; }


    void id() 
    { 
        cout << "kwadrat o polu " << pole << endl;
    }


private:
    double dlugosc_boku;

};

#endif // !KWADRAT_H