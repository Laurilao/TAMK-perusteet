#include <iostream>

using namespace std;

int main()
{
    char op;
    double luku1, luku2;
    
    cout << "Anna laskutoimitus (+ - * tai /): ";
    cin >> op;
    cout << "Syota ensimmainen luku: ";
    cin >> luku1;
    cout << "Syota toinen luku: ";
    cin >> luku2;
    
    if(op == '*')
    {
        cout << "Syottamiesi lukujen tulo on " << luku1*luku2 << endl;
    }
    else if(op == '+')
    {
        cout << "Syottamiesi lukujen summa on " << luku1+luku2 << endl;
    }
    else if(op == '-')
    {
        cout << "Syottamiesi lukujen erotus on " << luku1-luku2 << endl;
    }
    else if(op == '/')
    {
        cout << "Luku 1 jaettuna luku 2:lla on " << luku1/luku2 << endl;
    }
    else
        cout << "Virheellinen operaattori" << endl;
        
        
    return 0;
}