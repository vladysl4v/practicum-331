#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Element {
    string Name;
    string Symbol;
    int AtomicNumber;
    double AtomicWeight;
};

void sortByAtomicNumber(Element[], int);
void showPeriodic(Element[], int);
void searchBySymbol(string, Element[], int);
