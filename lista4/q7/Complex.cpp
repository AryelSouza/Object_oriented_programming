#include "Complex.hpp"
#include <iostream>
#include <string>

using namespace std;

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imaginary = i;
}

Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}

Complex Complex::subtract(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
}

void Complex::printComplex()
{
    cout << real << " + " << imaginary << "i" << endl;
}

void Complex::setComplexNumber(double rp, double ip)
{
    real = rp;
    imaginary = ip;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

Complex operator-(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imaginary = c1.imaginary - c2.imaginary;
    return temp;
}

Complex operator++(Complex &c)
{
    Complex temp;
    temp.real = c.real + 1;
    temp.imaginary = c.imaginary + 1;
    return temp;
}

Complex operator--(Complex &c)
{
    Complex temp;
    temp.real = c.real - 1;
    temp.imaginary = c.imaginary - 1;
    return temp;
}

Complex Complex::operator=(const Complex &c)
{
    real = c.real;
    imaginary = c.imaginary;
    return *this;
}

bool Complex::operator==(const Complex &c)
{
    if(real == c.real && imaginary == c.imaginary)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Complex::operator!=(const Complex &c)
{
    if(real != c.real || imaginary != c.imaginary)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Complex Complex::operator-=(const Complex &c)
{
    real -= c.real;
    imaginary -= c.imaginary;
    return *this;
}

Complex Complex::operator+=(const Complex &c)
{
    real += c.real;
    imaginary += c.imaginary;
    return *this;
}

