#include <iostream>
#include "Headers.h"

using namespace std;

int main()
{
    int luku;
    cout << "Anna luku: ";
    cin >> luku;
    cout << "Nelio luvusta: " << nelio(luku) << endl;
    
    int leveys, korkeus;
    cout << "Anna suorakaiteen leveys: ";
    cin >> leveys;
    cout << "Anna suorakaiteen korkeus: ";
    cin >> korkeus;
    cout << "Suorakaiteen pinta-ala: " << suorakaide(leveys, korkeus) << endl;
    
    float km, kulutus, hinta;
    cout << "Anna kilomterit: ";
    cin >> km;
    cout << "Anna kulutus (l/100km): ";
    cin >> kulutus;
    cout << "Anna polttoaineen hinta: ";
    cin >> hinta;
    cout << "Matkan hinta on: " << matkanHinta(km, kulutus, hinta) << "e" << endl;
    
    int tunnit;
    cout << "Anna viikkotyotunnit: ";
    cin >> tunnit;
    cout << "Viikkoansiot: " << palkka(tunnit) << "e" << endl;
    
    return 0;
}

