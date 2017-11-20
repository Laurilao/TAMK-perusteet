#include <iostream>

using namespace std;

void sulake(int p)
{
    int u = 220;
    int i;
    
    i = p / u;
    
    if (i <= 10)
    {
        cout << "Tarvitaan 10A sulake" << endl;
    }
    else if (i > 10 && i <= 16)
    {
        cout << "Tarvitaan 16A sulake" << endl;
    }
    else if (i > 16 && i <= 20)
    {
        cout << "Tarvitaan 20A sulake" << endl;
    }
    else
        cout << "Laitteen taakse tarvitaan useampi sulake" << endl;
    
    
    return;
}