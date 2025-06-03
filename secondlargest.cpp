#include<iostream>
using namespace std;
// code for finding secoond largest element in a static array
int main() {
    int nums[] = {5, 78, 79, 67, 91};
    int max1, max2, i;
    int n = sizeof(nums) / sizeof(nums[0]); 

    if (nums[0] > nums[1]) {
        max1 = nums[0];
        max2 = nums[1];
    } else {
        max2 = nums[0];
        max1 = nums[1];
    }

    for (i = 2; i < n; i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2 && nums[i] != max1) {
            max2 = nums[i];
        }
    }

    cout << "Second largest element in the array: " << max2;
    return 0;
}