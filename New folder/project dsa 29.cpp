// Write a program to calculate factorial of a number 
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    long long factorial = 1;
    for(int i = 1; i <= N; i++){
        factorial *= i;
    }
    cout<<"Factorial of "<<N<<" is: "<<factorial<<endl;
    return 0;
}
