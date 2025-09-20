/*Develop a program that converts a temperature from 
Fahrenheit to Celsius or vice versa based on user input. The 
user should specify the type of conversion.*/
#include<iostream>
using namespace std;
int main(){
    float temp;
    char choice;
 cout<<"Enter the temperature value: ";
    cin>>temp;
    cout<<"Convert to (C)elsius or (F)ahrenheit? ";
    cin>>choice;
    if(choice == 'C' || choice == 'c'){
        temp = (temp - 32) * 5/9;
        cout<<"Temperature in Celsius: "<<temp<<endl;
    }
    else if(choice == 'F' || choice == 'f'){
        temp = (temp * 9/5) + 32;
        cout<<"Temperature in Fahrenheit: "<<temp<<endl;
    }
    else{
        cout<<"Invalid choice!"<<endl;
    }
    return 0;
}