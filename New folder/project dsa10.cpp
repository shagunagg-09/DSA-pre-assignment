// write a program to input an ascii code and print the corresponding character
#include<iostream>
using namespace std;

int main() {
    int asciiCode;
    cout << "Enter an ASCII code: ";
    cin >> asciiCode;
    cout << "Character corresponding to ASCII code " << asciiCode << " is: " << char(asciiCode) << endl;
    return 0;
}
