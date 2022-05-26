#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    const int num = 6;

    Element Lithium{ "Lithium", "Li", 3, 6.94 };
    Element Hydrogen { "Hydrogen", "H", 1, 1.008 };
    Element Iron { "Iron", "Fe", 26, 55.845 };
    Element Helium { "Helium", "He", 2, 4.0026 };
    Element Calcium { "Calcium", "Ca", 20, 40.078 };
    Element Chromium { "Chromium", "Cr", 24, 51.996 };

    Element Periodic[num] = { Hydrogen, Helium, Calcium, Iron, Chromium, Lithium };

    sortByAtomicNumber(Periodic, num);

    showPeriodic(Periodic, num);

    searchBySymbol("Fe", Periodic, num);
}

