#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int num, temp, sum = 0;

    cout << "Enter number: ";
    cin >> num;

    temp = num;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    if (sum == num)
        cout << "Krishnamurthy Number";
    else
        cout << "Not a Krishnamurthy Number";

    return 0;
}
