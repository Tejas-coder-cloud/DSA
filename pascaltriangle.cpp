#include <iostream>
#include <vector>

using namespace std;
//code for making a pascal triangle
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
// A simpler approach for printing the pascal triangle
//#include <iostream>
//using namespace std;

//int main() {
//    int rows;
//
//    cout << "Enter the number of rows: ";
//    cin >> rows;
//
//    for (int i = 0; i < rows; i++) {
//        // Print leading spaces for alignment
 //       for (int space = 0; space < rows - i - 1; space++)
//            cout << "  ";
//
 //       int val = 1;
//        for (int j = 0; j <= i; j++) {
//            cout << val << "   ";
  //          // Calculate the next value using formula: val = val * (i - j) / (j + 1)
 //           val = val * (i - j) / (j + 1);
//        }
 //       cout << endl;
//    }
//
// //   return 0;
//}

