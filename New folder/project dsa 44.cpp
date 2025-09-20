//Write a program to print all Armstrong numbers under 1000

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n;

    // Calculate the sum of powers of digits
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    return sum == n;
}

int main() {
    cout << "Armstrong numbers under 1000 are: ";
    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
