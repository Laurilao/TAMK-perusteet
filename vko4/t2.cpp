#include <iostream>

using namespace std;

int main()
{
    int tulot;
    double tulovero, kuntavero, kuntaveropros, veropros;
    kuntaveropros = 0.1975;
    
    cout << "Syota tulot (e): ";
    cin >> tulot;
    
    kuntavero = kuntaveropros * tulot;
    
    if (tulot > 73100)
    {
        veropros = 0.315;
        tulot = tulot - 73100;
        tulovero = veropros * tulot;
    }
    else if (tulot > 40300)
    {
        veropros = 0.215;
        tulot = tulot - 40300;
        tulovero = veropros * tulot;
    }
    else if (tulot > 25300)
    {
        veropros = 0.175;
        tulot = tulot - 25300;
        tulovero = veropros * tulot;
    }
    else if (tulot > 16900)
    {
        veropros = 0.0625;
        tulot = tulot - 16900;
        tulovero = veropros * tulot;
    }
    else
    {
        cout << "Verot: " << kuntavero << " euroa" << endl;
    }
    
    cout << "Verot: " << kuntavero + tulovero << " euroa" << endl;
    
        
        
    return 0;
}