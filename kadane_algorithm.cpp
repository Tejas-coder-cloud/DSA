#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int kadane(const vector<int>& arr) {
    int max_so_far = INT_MIN;  // Stores the result
    int max_ending_here = 0;   // Running sum

    for (int num : arr) {
        max_ending_here += num;

        // Update result if needed
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;

        // If sum becomes negative, reset it to 0
        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is: " << kadane(arr) << endl;
    return 0;
}
