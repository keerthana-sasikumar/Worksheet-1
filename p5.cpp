#include <iostream>
using namespace std;

int main() {
    int units;
    float cost;

    cout << "Enter water units: ";
    cin >> units;

    if (units < 100)
        cost = units * 1;
    else if (units <= 500)
        cost = units * 1.5;
    else
        cost = units * 3;

    cout << "Water tax is Rs." << cost;

    return 0;
}
