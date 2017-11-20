#include <iostream>

using namespace std;

int main()
{
    char yksikko;
    double lampotila;

    cout << "Syota lampotila: ";
    cin >> lampotila;
    cout << "Syota yksikko (F=Fahrenheit, C=Celsius): ";
    cin >> yksikko;
    
    while (yksikko != 'c' && yksikko != 'C' && yksikko != 'f' && yksikko != 'F')
    {
        cout << "Vaara yksikko, yrita uudelleen: ";
        cin >> yksikko;
    }
    
    if (yksikko == 'c' || yksikko == 'C')
    {
        cout << lampotila << " Celsius = " << lampotila * 1.8 + 32 << " Fahrenheit" << endl;
    }
    else
    {
        cout << lampotila << " Fahrenheit = " << (lampotila - 32) / 1.8 << " Celsius" << endl;
    }
    
    
    return 0;
}