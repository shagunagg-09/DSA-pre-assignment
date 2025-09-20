// write a program to calculate the circumference of a circle
#include<iostream>
using namespace std;

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float circumference = 2 * 3.14159 * radius;
    cout << "The circumference is: " << circumference << endl;

    return 0;
}
