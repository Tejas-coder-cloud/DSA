//code to return the smallest index at which the target element is present 
#include<iostream>
using namespace std;
int  generate(int arr[],int n,int k)
{
    bool found =false;
    int x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"Target element found at index:"<<i;
            found =true;
            break;
        }
       
    }
     if(!found)
        {
            cout<<"-1";
        }
    return 0;
}
int main()
{
    int arr[]={1,3,3,4,4,5},k=7,n=sizeof(arr)/sizeof(arr[0]);
    generate(arr,n,k);
    return 0;

}