//  Write a program to check whether two given numbers 
// are co-prime numbers or not.
#include<iostream>  
using namespace std;    
int main(){ 
    int a, b;
    cout<<"Enter two positive integers: ";
    cin>>a>>b;
    int originalA = a, originalB = b;
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    if(a == 1){
        cout<<originalA<<" and "<<originalB<<" are co-prime numbers."<<endl;
    }else{
        cout<<originalA<<" and "<<originalB<<" are not co-prime numbers."<<endl;
    }
    return 0;    
}