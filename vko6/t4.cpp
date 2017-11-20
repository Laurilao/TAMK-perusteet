#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string toimitus;
    int luku;
    
    while (true)
    {
        cout << "Valitse laskutoimitus (1=neliojuuri, 2=log, 3=exp, 4=tan, L=lopetus): ";
        cin >> toimitus;
        
        if (toimitus == "L" || toimitus == "l")
        {
            break;
        }
        
        cout << "Syota luku: ";
        cin >> luku;
    
        if (toimitus == "1")
        {
            luku = sqrt(luku);
            cout << "Syottamasi luvun neliojuuri on " << luku << endl;
        }
        else if (toimitus == "2")
        {
            luku = log(luku);
            cout << "Syottamasi luvun logaritmi on " << luku << endl;
        }
        else if (toimitus == "3")
        {
            luku = exp(luku);
            cout << "Syottamasi luvun eksponenttifunktio on " << luku << endl;
        }
        else if (toimitus == "4")
        {
            luku = tan(luku);
            cout << "Syottamasti luvun tangentti on " << luku << endl;
        }
        else
            cout << "Virheellinen valinta" << endl;
        
    }
    
    return 0;
}