//Write a program to calculate sum of first N even natural numbers
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    int sum = 0;
    for(int i = 1; i <= N; i++){
        sum += 2 * i;
    }
    cout<<"Sum of first "<<N<<" even natural numbers is: "<<sum<<endl;
    return 0;
}