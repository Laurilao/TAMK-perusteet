#include <iostream>

using namespace std;

int main()
{
    int luku1, luku2, luku3, suurin;
    
    cout << "Anna luku 1: ";
    cin >> luku1;
    cout << "Anna luku 2: ";
    cin >> luku2;
    cout << "Anna luku 3: ";
    cin >> luku3;
    
    if(luku1 > luku2 && luku1 > luku3)
    {
        cout << "Luku 1 (" << luku1 << ") on suurin." << endl;
    }
    else if(luku2 > luku1 && luku2 > luku3)
    {
        cout << "Luku 2 (" << luku2 << ") on suurin." << endl;
    }
    else
        cout << "Luku 3 (" << luku3 << ") on suurin." << endl;
    
    return 0;
}
