#include "HugeInteger.hpp"
#include <iostream>
#include <string>
using namespace std;




HugeInteger::HugeInteger()
{
    size = 0;
    for(int i = 0; i < 40; i++)
    {
        huge[i] = 0;
    }
}

HugeInteger::HugeInteger(string s)
{
    size = s.length();
    for(int i = 0; i < size; i++)
    {
        huge[i] = s[size - i - 1] - '0';
    }
}

HugeInteger::HugeInteger(int i)
{
    size = 0;
    while(i > 0)
    {
        huge[size] = i % 10;
        i /= 10;
        size++;
    }
}

HugeInteger HugeInteger::add(HugeInteger h)
{
    HugeInteger temp;
    int carry = 0;
    for(int i = 0; i < size || i < h.size; i++)
    {
        temp.huge[i] = huge[i] + h.huge[i] + carry;
        carry = temp.huge[i] / 10;
        temp.huge[i] %= 10;
        temp.size++;
    }
    if(carry > 0)
    {
        temp.huge[temp.size] = carry;
        temp.size++;
    }
    return temp;
}

HugeInteger HugeInteger::subtract(HugeInteger h)
{
    HugeInteger temp;
    int borrow = 0;
    int diff = 0;
    int i = 0;
    while(i < size || i < h.size)
    {
        diff = huge[i] - borrow;
        if(i < h.size)
        {
            diff -= h.huge[i];
        }
        if(diff < 0)
        {
            borrow = 1;
            diff += 10;
        }
        else
        {
            borrow = 0;
        }
        temp.huge[i] = diff;
        i++;
    }
    temp.size = i;
    return temp;
}

HugeInteger HugeInteger::multiply(HugeInteger h)

{
    HugeInteger temp;
    int carry = 0;
    int product = 0;
    int i = 0;
    int j = 0;
    while(i < size)
    {
        j = 0;
        while(j < h.size)
        {
            product = huge[i] * h.huge[j] + carry;
            carry = product / 10;
            product = product % 10;
            temp.huge[i + j] += product;
            if(temp.huge[i + j] > 9)
            {
                carry += temp.huge[i + j] / 10;
                temp.huge[i + j] = temp.huge[i + j] % 10;
            }
            j++;
        }
        if(carry > 0)
        {
            temp.huge[i + j] += carry;
            carry = 0;
        }
        i++;
    }
    temp.size = i + j;
    return temp;
}
//tentativa do metodo de divisão



bool HugeInteger::isEqualTo(HugeInteger h)
{
    if(size != h.size)
    {
        return false;
    }
    for(int i = 0; i < size; i++)
    {
        if(huge[i] != h.huge[i])
        {
            return false;
        }
    }
    return true;
}

bool HugeInteger::isNotEqualTo(HugeInteger h)
{
    return !isEqualTo(h);
}

bool HugeInteger::isGreaterThan(HugeInteger h)

{
    if(size > h.size)
    {
        return true;
    }
    else if(size < h.size)
    {
        return false;
    }
    else
    {
        for(int i = size - 1; i >= 0; i--)
        {
            if(huge[i] > h.huge[i])
            {
                return true;
            }
            else if(huge[i] < h.huge[i])
            {
                return false;
            }
        }
        return false;
    }
}

bool HugeInteger::isLessThan(HugeInteger h)
{
    return !isGreaterThanOrEqualTo(h);
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger h)
{
    return isGreaterThan(h) || isEqualTo(h);
}

bool HugeInteger::isLessThanOrEqualTo(HugeInteger h)
{
    return isLessThan(h) || isEqualTo(h);
}

bool HugeInteger::isZero()
{
    for(int i = 0; i < size; i++)
    {
        if(huge[i] != 0)
        {
            return false;
        }
    }
    return true;
}


void HugeInteger::output()
{
    for(int i = size - 1; i >= 0; i--)
    {
        cout << huge[i];
    }
    cout << endl<<endl;
}

void HugeInteger::input()
{
    string s;
    cin >> s;
    size = s.length();
    for(int i = 0; i < size; i++)
    {
        huge[i] = s[size - i - 1] - '0';
    }
}

//sobrecarga do operador +

HugeInteger operator+(HugeInteger h1, HugeInteger h2)
{
    return h1.add(h2);
}

//sobrecarga do operador -

HugeInteger operator-(HugeInteger h1, HugeInteger h2)
{
    return h1.subtract(h2);
}

//sobrecarga do operador ==

bool operator==(HugeInteger h1, HugeInteger h2)
{
    return h1.isEqualTo(h2);
}


//sobrecarga do operador !=
bool operator!=(HugeInteger h1, HugeInteger h2)
{
    return h1.isNotEqualTo(h2);
}

//sobrecarga do operador >

bool operator>(HugeInteger h1, HugeInteger h2)
{
    return h1.isGreaterThan(h2);
}

//sobrecarga do operador <

bool operator<(HugeInteger h1, HugeInteger h2)
{
    return h1.isLessThan(h2);
}

//sobrecarga do operador >=

bool operator>=(HugeInteger h1, HugeInteger h2)
{
    return h1.isGreaterThanOrEqualTo(h2);
}

//sobrecarga do operador <=

bool operator<=(HugeInteger h1, HugeInteger h2)
{
    return h1.isLessThanOrEqualTo(h2);
}

//sobrecarga do operador *

HugeInteger operator*(HugeInteger h1, HugeInteger h2)
{
    return h1.multiply(h2);
}

//sobrecarga do operador <<

ostream& operator<<(ostream& out, HugeInteger h)
{
    h.output();
    return out;
}


//sobrecarga do operador >>

istream& operator>>(istream& in, HugeInteger& h)
{
    string s;
    in >> s;
    h.size = s.length();
    for(int i = 0; i < h.size; i++)
    {
        h.huge[i] = s[h.size - i - 1] - '0';
    }
    return in;
}



//tentativa de sobrecarga do operador = e verifica se esta recebendo um numero

/*HugeInteger HugeInteger::operator=(HugeInteger h)
{
    if(h.size > 40)
    {
        cout << "Numero muito grande" << endl;
    }
    else
    {
        for(int i = 0; i < h.size; i++)
        {
            huge[i] = h.huge[i];
        }
        size = h.size;
    }
    return *this;
}*/





//tentativa de sobrecarga do operador +=
HugeInteger operator+=(HugeInteger h1, HugeInteger h2)
{
    return h1.add(h2);
}