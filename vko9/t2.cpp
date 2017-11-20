#include <iostream>

using namespace std;

void tulostus(int maara);

int main()
{
    int sadeMaara[12];
    
    for (int i = 0; i < 12; i++)
    {
        cout << "Syota sademaara: ";
        cin >> sadeMaara[i];
    }
    
    for (int i = 0; i < 12; i++)
    {
        tulostus(sadeMaara[i]);
    }
    
    return 0;
}

void tulostus(int maara)
{
    for (int j = 0; j < maara; j++)
    {
        cout << "*";
    }
    
    cout << endl;
    
    return;
}