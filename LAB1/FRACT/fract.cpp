#include "fract.h" // jeśli tu implementujemy daną klase z pliku
// naglowkowego, to trzeba to tu zaimportowac

int fract::numerator() const
{ // const <- wartosc ulamka sie wtedy nie zmienia
    return num;
}
unsigned int fract::denominator() const
{
    return denom;
}

// tak  mowimy, ze ta metoda jest elemntem klasy fract
void fract::print(std::ostream &os) const
{

    os << numerator() << '/' << denominator();
}
