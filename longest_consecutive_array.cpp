#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int sequence(vector<int>& a) {
    int n = a.size();
    if (n == 0) {
        cout << "Pls provide a valid array";
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    unordered_set<int> s(a.begin(), a.end());  // Step 1: Store all elements in a hash set
    int longest = 0;

    for (int num : a) {
        // Step 2: Only check for start of a sequence
        if (s.find(num - 1) == s.end()) {
            int current = num;
            int streak = 1;

            // Step 3: Count consecutive numbers
            while (s.find(current + 1) != s.end()) {
                current++;
                streak++;
            }

            longest = max(longest, streak);  // Step 4: Track the maximum streak length
        }
    }

    return longest;
}

int main() {
    vector<int> a = {1, 9, 3, 10, 4, 20, 2};
    cout << "Length of longest consecutive sequence of vector: " << sequence(a);
    return 0;
}
