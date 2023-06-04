#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cout << "Enter the length of the array: ";
    cin >> N;

    int arr[N];
   cout << "Enter the elements of the array:\n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

   cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
