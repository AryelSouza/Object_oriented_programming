#ifndef COMPLEX_HPP
#define COMPLEX_HPP

using namespace std;

class Complex
{
    //sobrecarga do operador +
    friend Complex operator+(const Complex &c1, const Complex &c2);
    //sobrecarga do operador -
    friend Complex operator-(const Complex &c1, const Complex &c2);
    //sobrecarga do operador ++
    friend Complex operator++(Complex &c);
    //sobrecarga do operador --
    friend Complex operator--(Complex &c);
    private:
        double real;
        double imaginary;
    public:
        Complex();
        Complex(double r, double i);
        Complex add(Complex c);
        Complex subtract(Complex c);
        void printComplex();
        void setComplexNumber(double rp, double ip);
        //sobrecarga do operador =
        Complex operator=(const Complex &c);
        //sobrecarga do operador ==
        bool operator==(const Complex &c);
        //sobrecarga do operador !=
        bool operator!=(const Complex &c);
        //sobrecarga do operador -=
        Complex operator-=(const Complex &c);
        //sobrecarga do operador +=
        Complex operator+=(const Complex &c);
};

#endif