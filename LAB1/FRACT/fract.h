// jest to plik nagłowkowy

#pragma once        // bierz pod uwagę tylko pierwszy import pliku nagłowkowego
#include <iostream> // musimy tu importować, bo tego wymaga definicja
// gdyby w fract_test był najpierw iostream przez tym plikiem, to by działało

class fract
{
    int num = 0;
    unsigned int denom = 1;

public:
    int numerator() const; // const <- wartosc ulamka sie wtedy nie zmienia
    unsigned int denominator() const;
    void print(std::ostream &os) const; //  & <- referencja, nie kopuj zmiennej, tylko na niej działaj
};