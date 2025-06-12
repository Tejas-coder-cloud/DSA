// code to return number of occurences of '1's,'0's,'2's in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[4]={0,0,1,2},count=0,count1=0,count2=0,n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
        if(arr[i]==1)
        {
            count1++;
        }
        if(arr[i]==2)
        {
            count2++;
        }
        
        
    }
    cout<<"Number of occurences of zero :"<<count<<endl;
    cout<<"Number of occurences of one :"<<count1<<endl;
    cout<<"Number of occurences of two :"<<count2<<endl;
return 0;
}