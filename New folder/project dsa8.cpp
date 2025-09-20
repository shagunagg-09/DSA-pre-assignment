// write a program to ask a user about the cost price and selling price of a banana per dozen calculate the profit or loss earned upon selling 25 bananas
#include<iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice, profitOrLoss;
    cout << "Enter cost price of a dozen bananas: ";
    cin >> costPrice;
    cout << "Enter selling price of a dozen bananas: ";
    cin >> sellingPrice;

    profitOrLoss = (sellingPrice - costPrice) / costPrice * 100;

    if (profitOrLoss > 0) {
        cout << "Profit earned upon selling 25 bananas is: " << profitOrLoss * 25 / 12 << "%" << endl;
    } else {
        cout << "Loss incurred upon selling 25 bananas is: " << profitOrLoss * 25 / 12 << "%" << endl;
    }

    return 0;
}
