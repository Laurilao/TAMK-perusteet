#include <iostream>
#include <string>

using namespace std;

int main()
{
    string etunimi, sukunimi, osoite, katunumero, postinumero, kunta;
    
    cout << "Syota etunimi: ";
    cin >> etunimi;
    cout << "Syota sukunimi: ";
    cin >> sukunimi;
    cout << "Syota osoite: ";
    cin >> osoite;
    cout << "Syota katunumero: ";
    cin >> katunumero;
    cout << "Syota postinumero: ";
    cin >> postinumero;
    cout << "Syota kunta: ";
    cin >> kunta;
    
    cout << "Osoitteesi on: " << etunimi << " " << sukunimi << " " << osoite << " " << katunumero << " " << postinumero << " " <<
    kunta << endl;
    
    if (etunimi[0] < sukunimi[0])
    {
        cout << "Etunimesi tulee aakkosissa ensin" << endl;
    }
    else
        cout << "Sukunimesi tulee aakkosissa ensin" << endl;
    
    int pituus = etunimi.length() + sukunimi.length();
    
    cout << "Nimesi pituus on " << pituus << " merkkia" << endl;
    
    return 0;
}