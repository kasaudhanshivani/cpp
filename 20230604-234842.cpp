#include <bits/stdc++.h>
using namespace std;
#include <vector>

void reverseArrayList(vector<int>& arr, int position) {
    int start = 0;
    int end = position - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int position = 3;

    cout << "Original ArrayList: ";
    for (int num : arr) {
        cout << num << " ";
    }
   cout << std::endl;

    reverseArrayList(arr, position);

   cout << "Reversed ArrayList at position " << position << ": ";
    for (int num : arr) {
       cout << num << " ";
    }
    cout << endl;

    return 0;
}
