//butterfly pattern in C++
#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows

    // upper part
    for (int i = 1; i <= n; i++) {
        // print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // lower part
    for (int i = n; i >= 1; i--) {
        // print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
