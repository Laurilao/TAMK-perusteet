#include <iostream>

using namespace std;

int main()
{
    int luku1, luku2;
    
    cout << "Syota 1. luku: ";
    cin >> luku1;
    cout << "Syota 2. luku: ";
    cin >> luku2;
    
    int erotus = luku1 - luku2;
    int tulo = luku1 * luku2;
    
    cout << "Lukujen erotus on " << erotus << "." << endl;
    cout << "Lukujen summa on " << tulo << "." << endl;
    
    return 0;
    
}