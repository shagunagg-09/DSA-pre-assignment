// write a program to calculate volume of a cuboid
#include<iostream>
using namespace std;

int main() {
    float length, width, height, volume;
    cout << "Enter length, width and height of the cuboid: ";
    cin >> length >> width >> height;
    volume = length * width * height;
    cout << "Volume of the cuboid is: " << volume << endl;
    return 0;
}