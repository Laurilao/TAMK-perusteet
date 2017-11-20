#include <iostream>

using namespace std;

float matkanHinta(float km, float kulutus, float hinta)
{
    float total;
    total = (km / 100) * kulutus * hinta;
    return total;
}