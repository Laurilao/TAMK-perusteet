#include <iostream>

using namespace std;

int main()
{
    const double g = 9.81;
    double nopeus;
    int aika;
    
    cout << "Anna aika (s): ";
    cin >> aika;
    
    cout << endl << "Aika   Nopeus (km/h)" << endl;
    
    for (int i = 0; i <= aika; i++)
    {
        nopeus = g * i * 3.6;
        cout << i << "      " << nopeus << endl;
    }
    
    return 0;
}