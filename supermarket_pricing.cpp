#include <iostream>
using namespace std;

int calculatePrice(int N) {
    int product = 1;

    while (N > 0) {
        int digit = N % 10;  // Extract the last digit
        product *= digit;    // Multiply the digit into product
        N /= 10;             // Remove the last digit
    }

    return product;
}

int main() {
    int N;
    cout << "Enter the value N: ";
    cin >> N;

    int price = calculatePrice(N);
    cout << "Price: " << price << endl;

    return 0;
}
