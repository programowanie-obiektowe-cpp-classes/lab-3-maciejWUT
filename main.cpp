#include "kolo.h"
#include "figura.h"
#include "kwadrat.h"


#include <iostream>
using namespace std;

void id(figure& f)
{
    f.id();
}

int main()
{
    figure f;
    kwadrat kwd(5);
    kolo    kol(2);

    f.id();
    id(f);
    kwd.id();
    id(kwd);
    kol.id();
    id(kol);
}