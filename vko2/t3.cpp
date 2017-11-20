#include <iostream>

using namespace std;

int main()
{
    double pituus1, pituus2;
    
    cout << "Syota 1. henkilon pituus (cm): ";
    cin >> pituus1;
    cout << "Syota 2. henkilon pituus (cm): ";
    cin >> pituus2;
    
    if (pituus1 == pituus2)
    {
        cout << "Henkilöt ovat yhta pitkat" << endl;
    }
    else if (pituus1 > pituus2)
    {
        cout << "Henkilo 1 on pidempi (" << pituus1 << "cm)" << endl;
    }
    else
    {
        cout << "Henkilo 2 on pidempi (" << pituus2 << "cm)" << endl;
    }
    
    
    return 0;
}