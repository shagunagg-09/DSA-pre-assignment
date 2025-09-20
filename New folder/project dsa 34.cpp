//Write a program to reverse a given number 
#include<iostream>
using namespace std;
int main(){
    int N, reversedNumber = 0;
    cout<<"Enter an integer: ";
    cin>>N;
    while(N != 0){
        int digit = N % 10;
        reversedNumber = reversedNumber * 10 + digit;
        N /= 10;
    }
    cout<<"Reversed Number: "<<reversedNumber<<endl;
    return 0;
}
