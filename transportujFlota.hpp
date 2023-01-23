#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{


    unsigned int suma_towarow{0};
    unsigned int liczba_zeglowcow{0};
    Stocznia     stocznia{};

    if (towar == 0) {
        return 0;
    }

    do {
        Statek* s1 = Stocznia()();
        if (Zaglowiec* z1 = dynamic_cast< Zaglowiec* >(s1); z1 != nullptr) {
            liczba_zeglowcow++;
        }
        suma_towarow += s1->transportuj();
        delete s1;
    } while (suma_towarow < towar);

    return liczba_zeglowcow;
}