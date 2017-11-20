#include <iostream>

using namespace std;

int main()
{
    int km, kayttovero;
    double bensa, diesel, kulutus_bensa, kulutus_diesel;
    
    cout << "Vuotuinen kilometrimaara: ";
    cin >> km;
    cout << "Bensan hinta: ";
    cin >> bensa;
    cout << "Dieselin hinta: ";
    cin >> diesel;
    cout << "Bensa-auton kulutus (l/100km): ";
    cin >> kulutus_bensa;
    cout << "Dieselauton kulutus (l/100km): ";
    cin >> kulutus_diesel;
    cout << "Dieselin kayttovoimavero: ";
    cin >> kayttovero;
    
    double bensa_total, diesel_total;
    
    bensa_total = (km / 100) * bensa * kulutus_bensa;
    diesel_total = (km / 100) * diesel * kulutus_diesel + kayttovero;
    
    cout << "-------------------" << endl;
    cout << "Bensa-auton kulut: " << bensa_total << " euroa." << endl;
    cout << "Dieselauton kulut: " << diesel_total << " euroa." << endl;
    
    if (bensa_total < diesel_total)
    {
        cout << "Bensa-auto on " << diesel_total - bensa_total << " euroa halvempi." << endl;
    }
    else
        cout << "Dieselauto on " << bensa_total - diesel_total << " euroa halvempi." << endl;
    
    
    
    
    return 0;
}