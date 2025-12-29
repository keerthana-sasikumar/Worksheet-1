#include <iostream>
using namespace std;

int main() {
    string password;

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != "admin")
            cout << "Incorrect Password. Try again\n";

    } while (password != "admin");

    cout << "Logged In";

    return 0;
}
