

#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        // print stars
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                cout << "\033[34m*\033[0m "; // Blue star
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}

