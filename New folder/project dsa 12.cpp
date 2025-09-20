/*wap to take date as input in below given format and convert the data format and disply thr result as given below
user "DD/MM/YYYY"
OUTPUT"DAY-DD,MONTH-MM,YEAR-YYYY"*/
#include<iostream>
using namespace std;

int main() {
    string inputDate;
    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> inputDate;

    // Extract day, month, and year from the input string
    string day = inputDate.substr(0, 2);
    string month = inputDate.substr(3, 2);
    string year = inputDate.substr(6, 4);

    // Display the output in the desired format
    cout << "OUTPUT: DAY-" << day << ", MONTH-" << month << ", YEAR-" << year << endl;

    return 0;
}