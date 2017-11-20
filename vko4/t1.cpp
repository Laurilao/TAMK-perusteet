#include <iostream>

using namespace std;

int main()
{
    double paino, pituus, indeksi;
    
    cout << "Syota pituus (m): ";
    cin >> pituus;
    cout << "Syota paino (kg): ";
    cin >> paino;
    
    indeksi = paino / (pituus*pituus);
    
    if (indeksi <= 20.7)
    {
        cout << "Painoindeksi: " << indeksi << ", alipaino" << endl;
    }
    else if (indeksi > 20.7 && indeksi <= 26.4)
    {
        cout << "Painoindeksi: " << indeksi << ", normaalipaino" << endl;
    }
    else if (indeksi > 26.4 && indeksi <= 27.8)
    {
        cout << "Painoindeksi: " << indeksi << ", lievä ylipaino" << endl;
    }
    else if (indeksi > 27.8 && indeksi <= 31.1)
    {
        cout << "Painoindeksi: " << indeksi << ", ylipaino" << endl;
    }
    else
    {
        cout << "Painoindeksi :" << indeksi << ", runsas ylipaino" << endl;
    }
    
    return 0;
}