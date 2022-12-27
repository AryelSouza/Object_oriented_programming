#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1) << 100.453627 << endl;
    cout << fixed << setprecision(2) << 100.453627 << endl;
    cout << fixed << setprecision(3) << 100.453627 << endl;
    cout << fixed << setprecision(4) << 100.453627 << endl;

    return 0;
}