//Write a program to check whether a given number is an Armstrong number or not.

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
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
