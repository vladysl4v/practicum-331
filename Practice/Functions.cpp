#include <iostream>
#include <string>
#include <iomanip>
#include "header.h"

using namespace std;

void showPeriodic(Element periodic[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << periodic[i].AtomicNumber << " " << periodic[i].Symbol << "\t"
            << periodic[i].Name << setw(10) << periodic[i].AtomicWeight << endl;
    }
}

void searchBySymbol(string Symbol, Element periodic[], int num)
{
    for (int i = 0; i < num; i++)
    {
        if (periodic[i].Symbol == Symbol)
        {
            cout << "Search succesful: " << endl;
            cout << periodic[i].AtomicNumber << " " << periodic[i].Symbol << "\t"
                << periodic[i].Name << setw(10) << periodic[i].AtomicWeight << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

void sortByAtomicNumber(Element periodic[], int num)
{
    Element temp;
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (periodic[j].AtomicNumber > periodic[j + 1].AtomicNumber) {
                temp = periodic[j];
                periodic[j] = periodic[j + 1];
                periodic[j + 1] = temp;
            }
        }
    }
}
