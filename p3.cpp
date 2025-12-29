#include <iostream>
using namespace std;

int main() {
    int population;
    float men, women, literateMen, literateWomen, illiterateMen, illiterateWomen;

    cout << "Enter total population: ";
    cin >> population;

    men = 0.52 * population;
    women = population - men;

    literateMen = 0.35 * population;
    literateWomen = 0.48 * population - literateMen;

    illiterateMen = men - literateMen;
    illiterateWomen = women - literateWomen;

    cout << "Total Women: " << women << endl;
    cout << "Illiterate Men: " << illiterateMen << endl;
    cout << "Illiterate Women: " << illiterateWomen << endl;

    return 0;
}
