#include <iostream>
using namespace std;

int main() {
    float km, miles, feet;

    cout << "Enter the distance between two cities (km): ";
    cin >> km;

    miles = km * 0.621371;
    feet = km * 3280.84;

    cout << "The distance between the two cities is "
         << km << " km or "
         << miles << " miles or "
         << feet << " foot.";

    return 0;
}
