//30. Write a program to calculate LCM of two numbers 
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two positive integers: ";
    cin>>a>>b;
    int lcm = (a > b) ? a : b;
    while(true){
        if(lcm % a == 0 && lcm % b == 0){
            cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm<<endl;
            break;
        }
        lcm++;
    }
    return 0;
}
