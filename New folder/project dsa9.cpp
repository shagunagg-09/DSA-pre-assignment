// write a program to input a character from the user and print its ascii code
#include<iostream>
using namespace std;            

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII code of " << ch << " is: " << int(ch) << endl;
    return 0;
}
