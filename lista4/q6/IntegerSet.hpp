#ifndef INTEGERSET_HPP
#define INTEGERSET_HPP

#include <iostream>
#include <string>

using namespace std;

class IntegerSet
{
    //sobrecarga do operador <<
    friend ostream &operator<<(ostream &output, IntegerSet &s);

    //sobrecarga do operador >>
    friend istream &operator>>(istream &input, IntegerSet &s);
    
    //sobrecarga do operador |
    friend IntegerSet operator|(IntegerSet &s1, IntegerSet &s2);

    //sobrecarga do operador &
    friend IntegerSet operator&(IntegerSet &s1, IntegerSet &s2);

    //função que imprime os inteiros presentes no conjunto sobrecarregando <<
    friend IntegerSet &operator<<(IntegerSet &s, int i);



    int size;
    int set[100];

public:

    IntegerSet();
    IntegerSet(int s);
    IntegerSet(int s, int *v);
    IntegerSet unionOfSets(IntegerSet);
    IntegerSet intersectionOfSets(IntegerSet);
    void insertElement(int);
    void deleteElement(int);
    void printSet();
    bool isEqualTo(IntegerSet);
    bool isNotEqualTo(IntegerSet);
    bool isSubsetOf(IntegerSet);
    bool isNotSubsetOf(IntegerSet);
    bool isZero();
    void output();
};

#endif