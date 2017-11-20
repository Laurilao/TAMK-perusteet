#include <iostream>

using namespace std;

int main()
{
    int painoraja;
    double paino1, paino2, paino3, paino4, yht_paino;
    
    cout << "Syota hissin painoraja (kg): ";
    cin >> painoraja;
    
    cout << "Syota henkilon 1. paino (kg): ";
    cin >> paino1;
    cout << "Syota henkilon 2. paino (kg): ";
    cin >> paino2;
    cout << "Syota henkilon 3. paino (kg): ";
    cin >> paino3;
    cout << "Syota henkilon 4. paino (kg): ";
    cin >> paino4;
    
    yht_paino = paino1 + paino2 + paino3 + paino4;
    
    if (yht_paino > painoraja)
    {
        cout << "Ylipainoa, hissia ei saa kayttaa!" << endl;
    }
    else
    {
        cout << "Hissi kaytettavissanne!" << endl;
    }
    
    
    return 0;
}