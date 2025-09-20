// Write a program to check whether a given number is 
// there in the Fibonacci series or not. 
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    int a = 0, b = 1;
    bool found = false;
    while(a <= N){
        if(a == N){
            found = true;
            break;
        }
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    if(found){
        cout<<N<<" is in the Fibonacci series."<<endl;
    }else{
        cout<<N<<" is not in the Fibonacci series."<<endl;
    }
    return 0;
}
