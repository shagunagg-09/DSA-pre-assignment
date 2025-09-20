/*Write a program that takes three numbers as input and 
finds the middle (second largest) number. */
#include<iostream>
using namespace std;
int main(){
    float num1, num2, num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)){
        cout<<"Middle number is: "<<num1<<endl;
    }
    else if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)){
        cout<<"Middle number is: "<<num2<<endl;
    }
    else{
        cout<<"Middle number is: "<<num3<<endl;
    }
    return 0;
}