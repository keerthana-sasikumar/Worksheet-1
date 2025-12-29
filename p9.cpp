#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    float assessed, taxable, tax;

    cout << "Enter assessed value: ";
    cin >> assessed;

    taxable = 0.92 * assessed;
    tax = (taxable / 100) * 1.05;

    ofstream file("property_tax.txt");
    file << fixed << setprecision(2);
    file << left << setw(20) << "Assessed Value:" << right << assessed << endl;
    file << left << setw(20) << "Taxable Amount:" << right << taxable << endl;
    file << left << setw(20) << "Tax Rate per 100:" << right << "1.05" << endl;
    file << left << setw(20) << "Property Tax:" << right << tax << endl;

    file.close();

    cout << "Data written to file.";

    return 0;
}
