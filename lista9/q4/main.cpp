#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Fahrenheit   Celsius" << endl;

    for (int fahrenheit = 0; fahrenheit <= 212; fahrenheit++)
    {
        float celsius = 5.0/9.0 * (fahrenheit - 32);

        cout << right << setw(12) << fahrenheit;
        cout << right << setw(12) << fixed << setprecision(3) << celsius << endl;
    }

    return 0;
}