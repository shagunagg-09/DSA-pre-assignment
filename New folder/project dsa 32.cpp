//Write a program to check whether a given number is a 
//Prime number or not 
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a positive integer: ";
    cin>>N;
    bool isPrime = true;
    if(N <= 1){
        isPrime = false;
    }
    for(int i = 2; i*i <= N; i++){
        if(N % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<N<<" is a prime number."<<endl;
    }else{
        cout<<N<<" is not a prime number."<<endl;
    }
    return 0;
}
