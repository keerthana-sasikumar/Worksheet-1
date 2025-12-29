#include <iostream>
using namespace std;

int main() {
    int initial, final, units;
    float bill;

    cout << "Enter initial meter reading: ";
    cin >> initial;
    cout << "Enter final meter reading: ";
    cin >> final;

    units = final - initial;
    bill = units * 5;   // assume Rs.5 per unit

    cout << "Units Consumed: " << units << endl;
    cout << "Electricity Bill: Rs." << bill;

    return 0;
}
