//code to find whether an array is sorted or not 
#include<iostream>
using namespace std;
string isSorted(int arr[], int n) {
    bool ascending = true, descending = true;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1])
            ascending = false;
        if (arr[i] < arr[i + 1])
            descending = false;
    }
     if (ascending)
        return "ascending";
    else if (descending)
        return "descending";
    else
        return "not sorted";

}
int main()
{
    int arr[]={3,6,7,8,9},n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is sorted in "<<isSorted(arr,n)<<" order";
    return 0;
    
}