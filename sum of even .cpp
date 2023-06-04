#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int sum = 0;
    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

 cout << "The sum of all even numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
