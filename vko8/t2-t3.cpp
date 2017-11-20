#include <iostream>

#include "Headers.h"

using namespace std;

int main()
{
    
    // T2
    
    float jannite, resistanssi;
    
    cout << "Anna piirin jannite: ";
    cin >> jannite;
    
    cout << "Anna piirin resistanssi: ";
    cin >> resistanssi;

    virta(jannite, resistanssi);    
    
    // T3
    
    int teho;
    
    cout << "Anna laitteen kuluttama teho: ";
    cin >> teho;
    
    sulake(teho);
    
    return 0;
}