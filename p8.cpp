#include <iostream>
using namespace std;

int main() {
    long long num;
    int steps = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num >= 10) {
        long long sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
        steps++;
    }

    cout << "Digital Root: " << num << endl;
    cout << "Steps Required: " << steps;

    return 0;
}
