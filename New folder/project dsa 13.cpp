//wap to take time as input in below given format and convert the time format and disply thr result as given below
//user "HH:MM"
#include<iostream>
using namespace std;

int main() {
    string inputTime;
    cout << "Enter time in HH:MM format: ";
    cin >> inputTime;

    // Extract hours and minutes from the input string
    string hours = inputTime.substr(0, 2);
    string minutes = inputTime.substr(3, 2);

    // Display the output in the desired format
    cout << "OUTPUT: HOURS-" << hours << ", MINUTES-" << minutes << endl;

    return 0;
}
