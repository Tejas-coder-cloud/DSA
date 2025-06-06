/* code  to find missing element of the array*/
#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(const vector<int>& a) {
    int n = a.size(); // since one element is missing, full range is from 0 to n
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for (int num : a) {
        actual_sum += num;
    }

    return expected_sum - actual_sum;
}

int main() {
    vector<int> a = {0,1,2,3,4,5,7}; // 4 is missing
    cout << "Missing element of the array: " << findMissingElement(a) << endl;
    return 0;
}
