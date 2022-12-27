#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string input;
    cout << "Digite uma string: ";
    getline(cin, input);

    int size = input.size();
    cout << "O tamanho é: " << size << endl;

    cout << setw(size*2) << input << endl;

    return 0;
}