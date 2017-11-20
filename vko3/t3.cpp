#include <iostream>

using namespace std;

int main()
{
    int paino;
    double postimaksu;
    
    cout << "Anna 1.lk kirjeen paino (g): ";
    cin >> paino;
    
    if(paino <= 50)
    {
        postimaksu = 0.6;
    }
    else if(paino <= 100)
    {
        postimaksu = 0.9;
    }
    else if(paino <= 250)
    {
        postimaksu = 1.3;
    }
    else if(paino <= 500)
    {
        postimaksu = 2.1;
    }
    else if(paino <= 1000)
    {
        postimaksu = 3.5;
    }
    else
        postimaksu = 5.5;
    
    cout << "Postimaksu on " << postimaksu << " euroa." << endl;
    
    return 0;
}