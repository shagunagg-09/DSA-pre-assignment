//Write a program to print first N terms of Fibonacci series. 
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    int a = 0, b = 1;
    cout<<"Fibonacci Series: ";
    for(int i = 1; i <= N; i++){
        cout<<a<<" ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout<<endl;
    return 0;
}
