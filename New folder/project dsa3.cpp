// write a program to calculate simple interest
#include<iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    float simpleInterest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << simpleInterest << endl;

    return 0;
}