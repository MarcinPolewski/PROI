#include "fract.h" // dobrze przy testach zeby testowana klasa byla pierwszym importem
#include <iostream>

using namespace std;

int main()
{
    fract f1;
    f1.print(std::cout);
    // std::cerr <- strumień do reportowania błędow, dziala jak cout

    cout << "End of tests!\n";

    return 0;
}