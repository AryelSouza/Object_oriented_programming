#ifndef HUGEINTEGER_HPP
#define HUGEINTEGER_HPP

#include <iostream>
#include <string>

using namespace std;

class HugeInteger
{

//sobrecarga do operador +
friend HugeInteger operator+(HugeInteger &h1, HugeInteger &h2);

//sobrecarga do operador -
friend HugeInteger operator-(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador *
friend HugeInteger operator*(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador /
friend HugeInteger operator/(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador <<
friend ostream &operator<<(ostream &output, HugeInteger &h);
//sobrecarga do operador >>
friend istream &operator>>(istream &input, HugeInteger &h);
//sobrecarga do operador !=
friend bool operator!=(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador <
friend bool operator<(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador >
friend bool operator>(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador <=
friend bool operator<=(HugeInteger &h1, HugeInteger &h2);
//sobrecarga do operador >=
friend bool operator>=(HugeInteger &h1, HugeInteger &h2);


private:
	int size;
	int huge[40];

public:
    HugeInteger();
    HugeInteger(string);
    HugeInteger(int);
    HugeInteger add(HugeInteger);
    HugeInteger subtract(HugeInteger);
    HugeInteger multiply(HugeInteger);
    HugeInteger division(HugeInteger);
    bool isEqualTo(HugeInteger);
    bool isNotEqualTo(HugeInteger);
    bool isGreaterThan(HugeInteger);
    bool isLessThan(HugeInteger);
    bool isGreaterThanOrEqualTo(HugeInteger);
    bool isLessThanOrEqualTo(HugeInteger);  
    bool isZero();
    void output();
    void input();
    //sobrecarga do operador ==
    bool operator==(HugeInteger &h);
    //sobrecarga do operador +=
    HugeInteger operator+=(HugeInteger &h);
    //sobrecarga do operador -=
    HugeInteger operator-=(HugeInteger &h);
    //sobrecarga do operador =
    HugeInteger operator=(HugeInteger &h);



};

#endif

