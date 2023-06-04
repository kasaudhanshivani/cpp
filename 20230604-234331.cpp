#include <bits/stdc++.h>
using namespace std;
int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

    if (isupper(input)) {
        cout << "1 (Uppercase)" << endl;
    } else if (islower(input)) {
        cout << "0 (Lowercase)" << endl;
    } else {
        cout << "-1 (Not an alphabet)" << endl;
    }

    return 0;
}
