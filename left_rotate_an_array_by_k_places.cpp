//code to shift each element to the left by k places in the array
//method 1: Without inplace sort
#include<iostream>
using namespace std;
#include<vector>
vector<int> left( const vector<int>&arr,int k)
{
    int n=arr.size();
     k=k%n;
    vector<int> result(n);
    for(int i=0;i<n;++i)
    {
        result[i]=arr[(i+k)%n];
    }
    return result;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    int k,n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the places to which the array is to be shifted :";
    cin>>k;
    vector<int> shifted = left(arr, k);

    for (int val : shifted)
        cout << val << " ";
    cout << endl;

}
//method 2: Using inplace sort so that the new array doesn't comnsume any extra space
/*#include <iostream>
#include <vector>
#include <algorithm>  // for reverse()

using namespace std;

void leftShiftInPlace(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    if (k == 0) return;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    leftShiftInPlace(arr, k);

    for (int val : arr)
        cout << val << " ";
    cout << endl;

    return 0;
}
*/