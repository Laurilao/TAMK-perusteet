#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lottokone()
{
    int rivi[7];
    
    srand(time(NULL));
    
    for (int i = 0; i < 7; i++)
    {
        rivi[i] = rand() % 39 + 1;
        
        // Tarkista sama numero
        for (int j = 0; j < i; j++)
        {
            while (rivi[j] == rivi[i])
            {
                rivi[i] = rand() % 39 + 1;
            }
        }
    }
    
    cout << "Lottorivi on : ";
    
    for (int i = 0; i < 7; i++)
    {
        cout << rivi[i] << " ";
    }
    
    cout << endl;
    
    return;    
}