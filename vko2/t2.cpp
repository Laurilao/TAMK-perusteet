#include <iostream>

using namespace std;

int main()
{
    double laina, korkopros, la_aika, korot;
    
    cout << "Syota lainan maara (euroa): ";
    cin >> laina;
    cout << "Syota korkoprosentti: ";
    cin >> korkopros;
    cout << "Syota laina-aika (vuosia): ";
    cin >> la_aika;
    
    korot = laina * (korkopros/100) * la_aika;
    
    cout << "Lainan korot laina-ajalta ovat " << korot << " euroa" << endl;
    
    return 0;
}