// elements present at even indices needed to be print 
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements present at alternate positions are as follows"<<endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}