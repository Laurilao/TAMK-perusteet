#include <iostream>

using namespace std;

int main()
{
    for (int i = 2; i <= 20; i++)
    {
        if (i % 2 == 0 && i != 20)
        {
            cout << i << ", ";
        }
        else if (i == 20)
        {
            cout << i;
        }
    }
    
    cout << endl;
    
    return 0;
}