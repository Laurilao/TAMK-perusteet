#include <iostream>

using namespace std;

double laskeKeskiarvo(int arr[]);

int main()
{
    int tulokset[10] = { 0 };
    int kysyTulos;
    double keskiArvo;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Anna tenttitulos " << i << ": ";
        cin >> kysyTulos;
        tulokset[i] = kysyTulos;
    }
    
    cout << endl << "Tenttitulokset:" << endl;
    cout << "---------------" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << tulokset[i] << " ";
    }
    
    cout << endl << "Keskiarvo: " << laskeKeskiarvo(tulokset) << endl;
    
    return 0;
}

double laskeKeskiarvo(int arr[])
{
    double total = 0.0;
    
    for (int i = 0; i < 10; i++)
    {
        total += arr[i];
    }
    
    return (double)total / 10.0;
}