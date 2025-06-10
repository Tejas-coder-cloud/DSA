#include<iostream>
#include<vector>
using namespace std;

vector<int> unionSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
    vector<int> result;          // Stores the final union of the arrays
    int i = 0, j = 0;            // Pointers to traverse nums1 and nums2

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        } else if (nums1[i] > nums2[j]) {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        } else {
            // nums1[i] == nums2[j], so add it only once
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements in nums1
    while (i < nums1.size()) {
        if (result.empty() || result.back() != nums1[i])
            result.push_back(nums1[i]);
        i++;
    }

    // Add remaining elements in nums2
    while (j < nums2.size()) {
        if (result.empty() || result.back() != nums2[j])
            result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 4, 5, 6};
    vector<int> nums2 = {2, 3, 5, 7};

    vector<int> result = unionSortedArrays(nums1, nums2);

    cout << "Union of arrays: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
