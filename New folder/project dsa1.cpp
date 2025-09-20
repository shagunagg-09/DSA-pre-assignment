 // write a program to calcualte averge of three integer numbers are given by user 
 #include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    float average = (num1 + num2 + num3) / 3.0;
    cout << "The average is: " << average << endl;

    return 0;
}
