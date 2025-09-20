#include<iostream>
using namespace std;
template <typename T,typename U>

float sum(T a, U b){
    return a+b;
}
int main (){
cout<<sum(2,4)<<endl;

cout<<sum(2.3,3.4)<<endl;
cout<<sum(2.3,3.4)<<endl;

    return 0;
}