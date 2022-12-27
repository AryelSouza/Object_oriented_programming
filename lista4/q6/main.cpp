#include "IntegerSet.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    IntegerSet s1(5, new int[5]{1, 2, 3, 4, 5});
    IntegerSet s2(5, new int[5]{1, 3, 5, 7, 9});
    IntegerSet s3 = s1.unionOfSets(s2);
    IntegerSet s4 = s1.intersectionOfSets(s2);
    s3.printSet();
    s4.printSet();
    return 0;
}
