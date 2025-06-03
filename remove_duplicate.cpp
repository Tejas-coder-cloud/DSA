#include<iostream>
using namespace std;
#include<unordered_set>
// code to print the duplicate elements present in the array only once
int main()
{
    int arr[]={5,5,6,6,7,8,9},n=sizeof(arr)/sizeof(arr[0]),j;
     unordered_set<int> printed; // this will store unique values that we've printed

    for (int i = 0; i < n; ++i) {
        if (printed.find(arr[i]) == printed.end()) {
            // If this number hasn't been printed yet
            cout << arr[i] << " ";      // print it
            printed.insert(arr[i]);     // and mark it as printed
        }
        // If it's already in the set, do nothing
    }

}