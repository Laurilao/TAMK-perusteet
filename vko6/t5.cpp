#include <iostream>

using namespace std;

int main()
{
    int termit;
    int jakaja = 1;
    double likiarvo = 0.0;
    
    cout << "Montako termia haluat piin laskentaan: ";
    cin >> termit;
    
    for (int i = 0; i < termit; i++)
    {
        likiarvo += 4.0 / jakaja - 4.0 / (jakaja + 2);
        jakaja += 4;
    }
    
    cout << "Piin likiarvo on: " << likiarvo << endl;
    
    return 0;
}