#include "Complex.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.printComplex();
    Complex c4 = c1 - c2;
    c4.printComplex();
    Complex c5 = c1;
    c5.printComplex();
    Complex c6;
    c6 = c1;
    c6.printComplex();
    if(c1 == c2)
    {
        cout << "c1 == c2" << endl;
    }
    else
    {
        cout << "c1 != c2" << endl;
    }
    if(c1 != c2)
    {
        cout << "c1 != c2" << endl;
    }
    else
    {
        cout << "c1 == c2" << endl;
    }
    c1 += c2;
    c1.printComplex();
    c1 -= c2;
    c1.printComplex();
    return 0;
}