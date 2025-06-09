/* code to find the longest sub array of an array which matches the key */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumIndex;  // sum -> first index
    int maxLength = 0;
    int currentSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i]; 

        // Case 1: Subarray from beginning
        if (currentSum == k) {
            maxLength = i + 1;
        }

        // Case 2: Subarray found in the middle
        if (prefixSumIndex.find(currentSum - k) != prefixSumIndex.end()) {
            int length = i - prefixSumIndex[currentSum - k];
            maxLength = max(maxLength, length);
        }

        // Store first occurrence of currentSum
        if (prefixSumIndex.find(currentSum) == prefixSumIndex.end()) {
            prefixSumIndex[currentSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;

    int result = longestSubarrayWithSumK(nums, k);
    cout << "Length of the longest sub-array with sum " << k << " is: " << result << endl;

    return 0;
}
