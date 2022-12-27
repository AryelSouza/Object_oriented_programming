#include "IntegerSet.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    IntegerSet a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    int arrayA[ 5 ] = { 25, 67, 2, 9, 99 };
    int arrayB[ 7 ] = { 25, 67, 2, 9, 99, 105, 45 };
    int arrayC[ 100 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                          11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                          21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                          31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                          41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                          51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
                          61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
                          71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
                          81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
                          91, 92, 93, 94, 95, 96, 97, 98, 99, 100 };
    int arrayD[ 5 ] = { 100, 2, 9, 67, 25 };
    int arrayE[ 7 ] = { 100, 2, 9, 67, 25, 105, 45 };
    int arrayF[ 100 ] = {
                            1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                            31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                            41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                            51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
                            61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
                            71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
                            81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
                            91, 92, 93, 94, 95, 96, 97, 98, 99, 100
                            };

    a = IntegerSet( arrayA, 5 );
    b = IntegerSet( arrayB, 7 );
    c = IntegerSet( arrayC, 100 );
    d = IntegerSet( arrayD, 5 );
    e = IntegerSet( arrayE, 7 );
    f = IntegerSet( arrayF, 100 );

    cout << "Set a contem: " << endl;
    a.printSet();
    cout << "Set b contem: " << endl;
    b.printSet();
    cout << "Set c contem: " << endl;
    c.printSet();
    cout << "Set d contem: " << endl;
    d.printSet();
    cout << "Set e contem: " << endl;
    e.printSet();
    cout << "Set f contem: " << endl;
    f.printSet();


    cout << "A uniao de a e b é:" << endl;
    unionOfSets( a, b ).printSet();
    cout << "A uniao de a e c é:" << endl;
    unionOfSets( a, c ).printSet();
    cout << "A uniao de a e d é:" << endl;
    unionOfSets( a, d ).printSet();
    cout << "A uniao de a e e é:" << endl;
    unionOfSets( a, e ).printSet();
    cout << "A uniao de a e f é:" << endl;
    unionOfSets( a, f ).printSet();


    cout << "Interseção de a e b é:" << endl;
    intersectionOfSets( a, b ).printSet();
    cout << "Interseção de a e c é:" << endl;
    intersectionOfSets( a, c ).printSet();
    cout << "Interseção de a e d é:" << endl;
    intersectionOfSets( a, d ).printSet();
    cout << "Interseção de a e e é:" << endl;
    intersectionOfSets( a, e ).printSet();
    cout << "Interseção de a e f é:" << endl;
    intersectionOfSets( a, f ).printSet();
    


    cout << "Set a é igual a set b?: " << boolalpha << a.isEqualTo( d ) << endl;
    cout << "Set b é igual a set e?: " << boolalpha << b.isEqualTo( e ) << endl;
    cout << "Set c é igual a set f?: " << boolalpha << c.isEqualTo( f ) << endl;
    cout << "Set d é igual a set a?: " << boolalpha << d.isEqualTo( a ) << endl;
    cout << "Set e é igual a set b?: " << boolalpha << e.isEqualTo( b ) << endl;
    cout << "Set f é igual a set c?: " << boolalpha << f.isEqualTo( c ) << endl;



    cout << "Inserindo 77 no set a..." << endl;
    a.insertElement( 77 );
    cout << "Set a contem: " << endl;
    a.printSet();
    cout << "Deletando 77 do set a..." << endl;
    a.deleteElement( 77 );
    cout << "Set a contem: " << endl;
    a.printSet();
    

    return 0;

}



