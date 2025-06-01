#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;

    if (numRows == 0) return result;

    // First row is always [1]
    result.push_back({1});

    for (int i = 1; i < numRows; ++i) {
        vector<int> row;
        const vector<int>& prevRow = result[i - 1];

        row.push_back(1); // First element

        // Middle elements
        for (int j = 1; j < i; ++j) {
            row.push_back(prevRow[j - 1] + prevRow[j]);
        }

        row.push_back(1); // Last element

        result.push_back(row);
    }

    return result;
}

int main() {
  
    int numRows;
    cout<<"Enter a number : ";
    cin>>numRows;
    vector<vector<int>> triangle = generate(numRows);

    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
