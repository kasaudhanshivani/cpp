#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <unordered_map>

vector<pair<int, int>> findPairsWithSum(const vector<int>& nums, int targetSum) {
    vector<pair<int, int>> pairs;
    unordered_map<int, int> complementCount;

    for (int num : nums) {
        int complement = targetSum - num;

        if (complementCount[complement] > 0) {
            pairs.push_back(make_pair(num, complement));
            complementCount[complement]--;
        }

        complementCount[num]++;
    }

    return pairs;
}

int main() {
    vector<int> nums;
    int targetSum, size, value;

    cout << "Enter the size of the vector: ";
    cin >> size;

    cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < size; ++i) {
       cin >> value;
        nums.push_back(value);
    }

    cout << "Enter the target sum: ";
    cin >> targetSum;

    vector<pair<int, int>> pairs = findPairsWithSum(nums, targetSum);

    for (const auto& pair : pairs) {
        cout << pair.first << " + " << pair.second << " = " << targetSum << endl;
    }

    return 0;
}
