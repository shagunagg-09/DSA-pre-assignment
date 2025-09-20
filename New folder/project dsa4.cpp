#include<iostream>
using namespace std;

void func(int val){
    cout<<"function with parameter\n";
}
void func(){
    cout<<"function without parameter\n";
}

int main(){
func();
func(20);
 return 0;

}