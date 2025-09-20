

#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    
    for(int i = 1; i <= n; i++) {
        // print spaces
        for(int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        // print numbers from 1 to i
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}