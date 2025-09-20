// Write a program to count digits in a given number
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    int count = 0;
    while(N != 0){
        N /= 10;
        count++;
    }
    cout<<"Number of digits is: "<<count<<endl;
    return 0;
}