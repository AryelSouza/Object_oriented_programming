#include "IntegerSet.hpp"

#include <iostream>
#include <string>

using namespace std;

IntegerSet::IntegerSet()
{
    size = 0;
    for(int i = 0; i < 100; i++)
    {
        set[i] = 0;
    }
}

IntegerSet::IntegerSet(int s)
{
    size = s;
    for(int i = 0; i < size; i++)
    {
        set[i] = 0;
    }
}

IntegerSet::IntegerSet(int s, int *v)
{
    size = s;
    for(int i = 0; i < size; i++)
    {
        set[i] = v[i];
    }
}

IntegerSet IntegerSet::unionOfSets(IntegerSet s)
{
    IntegerSet temp;
    temp.size = size;
    for(int i = 0; i < size; i++)
    {
        temp.set[i] = set[i];
    }
    for(int i = 0; i < s.size; i++)
    {
        temp.insertElement(s.set[i]);
    }
    return temp;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet s)
{
    IntegerSet temp;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < s.size; j++)
        {
            if(set[i] == s.set[j])
            {
                temp.insertElement(set[i]);
            }
        }
    }
    return temp;
}

void IntegerSet::insertElement(int i)
{
    if(size == 0)
    {
        set[0] = i;
        size++;
    }
    else
    {
        for(int j = 0; j < size; j++)
        {
            if(set[j] == i)
            {
                return;
            }
        }
        set[size] = i;
        size++;
    }
}

void IntegerSet::deleteElement(int i)
{
    for(int j = 0; j < size; j++)
    {
        if(set[j] == i)
        {
            for(int k = j; k < size - 1; k++)
            {
                set[k] = set[k + 1];
            }
            size--;
            return;
        }
    }
}

void IntegerSet::printSet()
{
    for(int i = 0; i < size; i++)
    {
        cout << set[i] << " ";
    }
    cout << endl;
}

bool IntegerSet::isEqualTo(IntegerSet s)
{
    if(size != s.size)
    {
        return false;
    }
    for(int i = 0; i < size; i++)
    {
        if(set[i] != s.set[i])
        {
            return false;
        }
    }
    return true;
}

bool IntegerSet::isNotEqualTo(IntegerSet s)
{
    if(size != s.size)
    {
        return true;
    }
    for(int i = 0; i < size; i++)
    {
        if(set[i] != s.set[i])
        {
            return true;
        }
    }
    return false;
}

bool IntegerSet::isSubsetOf(IntegerSet s)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < s.size; j++)
        {
            if(set[i] == s.set[j])
            {
                break;
            }
            if(j == s.size - 1)
            {
                return false;
            }
        }
    }
    return true;
}

bool IntegerSet::isNotSubsetOf(IntegerSet s)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < s.size; j++)
        {
            if(set[i] == s.set[j])
            {
                break;
            }
            if(j == s.size - 1)
            {
                return true;
            }
        }
    }
    return false;
}

bool IntegerSet::isZero()
{
    if(size == 0)
    {
        return true;
    }
    return false;
}



IntegerSet operator>>(IntegerSet &s, int i)
{
    s.deleteElement(i);
    return s;
}

IntegerSet operator|(IntegerSet &s1, IntegerSet &s2)
{
    return s1.unionOfSets(s2);
}

IntegerSet operator&(IntegerSet &s1, IntegerSet &s2)
{
    return s1.intersectionOfSets(s2);
}

//funçao que imprime os inteiros no conjunto sobrecarregando <<
ostream& operator<<(ostream &out, IntegerSet &s)
{
    s.printSet();
    return out;
}



