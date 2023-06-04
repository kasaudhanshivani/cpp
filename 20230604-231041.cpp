#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    double squareRoot = sqrt(n);
    if (squareRoot == floor(squareRoot)) {
        cout << "Square root of " << n << " is " << squareRoot << endl;
    } else {
        cout << "Floor value of square root of " << n << " is " << floor(squareRoot) << std::endl;
    }

    return 0;
}
