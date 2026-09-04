// Program B: Dynamic Memory using new and delete[] – Product Prices
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of products must be positive." << endl;
        return 0;
    }

    // Allocate memory at runtime for n product prices.
    double *prices = new double[n];

    double total = 0.0;

    cout << "Enter prices of " << n << " products:\n";
    for (int i = 0; i < n; i++) {
        cout << "Product " << i + 1 << ": ";
        cin >> prices[i];
        total += prices[i];
    }

    double average = total / n;

    cout << fixed << setprecision(2);
    cout << "\nTotal price: Rs. " << total << endl;
    cout << "Average price: Rs. " << average << endl;

    // Release the entire dynamically allocated array.
    delete[] prices;
    prices = nullptr;

    cout << "Dynamic memory released successfully." << endl;

    return 0;
}
