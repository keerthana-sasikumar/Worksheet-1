#include <iostream>
using namespace std;

int main() {
    float start, end, miles, amount;

    cout << "MILEAGE REMUNERATION CALCULATOR\n";
    cout << "Enter beginning odometer reading: ";
    cin >> start;
    cout << "Enter ending odometer reading: ";
    cin >> end;

    miles = end - start;
    amount = miles * 25;

    cout << "You travelled " << miles << " miles.\n";
    cout << "At Rs.25 per mile, your remuneration is Rs." << amount;

    return 0;
}
