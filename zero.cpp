#include <iostream>
#include <vector>

using namespace std;

void moveZeroes( vector<int> &nums) {
    int n = nums.size();
    int insertPos = 0;  // position to insert the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < n; ++i) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }

    // Fill remaining positions with zero
    while (insertPos < n) {
        nums[insertPos++] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int num : nums)
    {
     cout << num << " ";
    cout << endl;
    }

    return 0;
}
