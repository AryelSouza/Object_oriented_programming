#include "HugeInteger.h"
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
    int sum = 0;
    int i = 0;
    while(i < size || i < h.size)
    {
        sum = carry;
        if(i < size)
        {
            sum += huge[i];
        }
        if(i < h.size)
        {
            sum += h.huge[i];
        }
        carry = sum / 10;
        sum = sum % 10;
        temp.huge[i] = sum;
        i++;
    }
    if(carry > 0)
    {
        temp.huge[i] = carry;
        temp.size = i + 1;
    }
    else
    {
        temp.size = i;
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
HugeInteger HugeInteger::division(HugeInteger h)
{
    HugeInteger temp;
    HugeInteger temp2;
    int i = size - 1;
    int j = 0;
    while(i >= 0)
    {
        temp2.huge[j] = huge[i];
        temp2.size = j + 1;
        while(temp2.isGreaterThanOrEqualTo(h))
        {
            temp2 = temp2.subtract(h);
            temp.huge[i]++;
        }
        i--;
        j++;
    }
    return temp;
}


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
