#include <iostream>

using namespace std;

int palkka(int tunnit)
{
    int ansiot;
    ansiot += tunnit * 10;
    
    if (tunnit > 40)
    {
        ansiot += (tunnit - 40) * 5;
    }
    
    return ansiot;
}