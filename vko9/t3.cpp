#include <iostream>

using namespace std;

int main()
{
    double luku1, luku2, total;
    int valinta;
    
    cout << "Anna luku 1: ";
    cin >> luku1;
    
    cout << "Anna luku 2: ";
    cin >> luku2;
    
    cout << "Valitse 1, jos haluat lukujen summan" << endl;
    cout << "Valitse 2, jos haluat lukujen erotuksen " << endl;
    cout << "Valitse 3, jos haluat lukujen tulon" << endl;
    cout << "Valitse 4, jos haluat lukujen osamaaran" << endl;
    
    cout << "Valintasi: ";
    
    while ( !(cin >> valinta) || valinta > 4 || valinta < 1)
    {
        cout << "Vaara syote, yrita uudelleen: ";
        cin.clear();
        cin.ignore();
    }
    
    switch(valinta)
    {
        case 1: 
            total = luku1 + luku2;
            cout << "Lukujen summa: " << total << endl;
            break;
        case 2:
            total = luku1 - luku2;
            cout << "Lukujen erotus: " << total << endl;
            break;
        case 3:
            total = luku1 * luku2;
            cout << "Lukujen tulo: " << total << endl;
            break;
        case 4:
            total = luku1 / luku2;
            cout << "Lukujen osamaara: " << total << endl;
            break;
    }
    
    return 0;
}