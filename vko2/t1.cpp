#include <iostream>

using namespace std;

int main()
{
    double kanta, korkeus, p_ala;
    
    cout << "Anna kolmion kanta metreina: ";
    cin >> kanta;
    cout << "Anna kolmion korkeus metreina: ";
    cin >> korkeus;
    
    p_ala = kanta * korkeus / 2;
    
    cout << "Kolmion pinta-ala on " << p_ala << endl;
    
    return 0;
}