//code to shift one element to the left in the array
#include<iostream>
using namespace std;
void left(int arr[],int n)
{
    int first=arr[0];
    for(int i=0;i<n-1;++i)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}
int main()
{
    int arr[]={5,6,7,4,0},n=sizeof(arr)/sizeof(arr[0]);
    left(arr,n);
     for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
        return 0;
}
