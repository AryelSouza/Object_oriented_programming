#include "HugeInteger.h"
#include <iostream>
#include <string>


using namespace std;


int main()
{
    HugeInteger h1("1234567890123456789012345678901234567890");
    cout << "h1 = ";
    h1.output();
    HugeInteger h2("9876543210987654321098765432109876543210");
    cout << " h2 = ";
    h2.output();
    HugeInteger hd = h2.division(h1);
    cout << "h2 / h1 = ";
    hd.output();
    HugeInteger h3("1111111111111111111111111111111111111111");
    cout << "h3 = ";
    h3.output();
    HugeInteger h4=h1.add(h2);
    cout << "h1 + h2 = ";
    h4.output();
    HugeInteger h5=h1.subtract(h2);
    cout << "h1 - h2 = ";
    h5.output();
    HugeInteger h6=h1.multiply(h2);
    cout << "h1 * h2 = ";
    h6.output();
    cout << h1.isEqualTo(h2) << endl;
    cout << h1.isNotEqualTo(h2) << endl;
    cout << h1.isGreaterThan(h2) << endl;
    cout << h1.isLessThan(h2) << endl;
    cout << h1.isGreaterThanOrEqualTo(h2) << endl;
    cout << h1.isLessThanOrEqualTo(h2) << endl;
    cout << h1.isZero() << endl;



    return 0;
}


