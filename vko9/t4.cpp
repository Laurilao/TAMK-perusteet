#include <iostream>

using namespace std;

bool alkuLuku(int);

int main()
{
    for (int i = 0; i <= 1000; i++)
    {
        if (alkuLuku(i))
        {
            cout << i << " on alkuluku" << endl;
        }
    }
    
    return 0;
}

bool alkuLuku(int luku)
{
    if (luku < 2)
    {
        return false;
    }
    else
    
    for (int j = 2; j <= luku / 2; j++)
    {
        if (luku % j == 0)
        {
            return false;
        }
    }
    
    return true;
}