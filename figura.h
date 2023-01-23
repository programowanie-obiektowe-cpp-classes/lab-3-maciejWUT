#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

using namespace std;


class figure
{
public:
    figure() : pole(0) {}
    figure(double p) : pole(p) {}
    double get_pole() { return pole; }
    void   set_pole(double p) { pole = p; }

    void id()
    {
        cout << "Pole = " << pole << "\n";
    }

protected:
    double pole;
};


#endif // !FIGURE_H



