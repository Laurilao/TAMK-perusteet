#include <iostream>

using namespace std;

int main()
{
    int luku;
    
    cout << "Syota kokonaisluku: ";
    cin >> luku;
    
    while (luku != 0)
    {
        cout << "Hello world!" << endl;
        luku--;
    }
    
    luku = 1;
    
    while (luku <= 15)
    {
        cout << luku << " ";
        luku++;
    }
    
    cout << endl;
    
    return 0;
}