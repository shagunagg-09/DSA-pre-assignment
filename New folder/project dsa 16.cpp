/*Develop a program that takes a student's score (0-100) as
input and prints the corresponding grade (e.g., A, B, C, D, F)
based on a grading scale*/
#include <iostream>
using namespace std;    
int main() {
    int score;
    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score!" << endl;
    } else if (score >= 90) {
        cout << "Your grade is A." << endl;
    } else if (score >= 80) {
        cout << "Your grade is B." << endl;
    } else if (score >= 70) {
        cout << "Your grade is C." << endl;
    } else if (score >= 60) {
        cout << "Your grade is D." << endl;
    } else {
        cout << "Your grade is F." << endl;
    }

    return 0;
}