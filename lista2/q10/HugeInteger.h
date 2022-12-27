#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <iostream>
#include <string>

using namespace std;

class HugeInteger
{
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
};

#endif
