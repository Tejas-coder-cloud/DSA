#include<iostream>
using namespace std;
//code for finding the pair of elements in the array which matches the target element
int main()
{
    int arr[4]={3,4,5,6};
    int target =16;
    for(int i=0;i<4;++i)
    {
        for(int j=i+1;j<4;++j)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"Valid pair"<<"("<<i<<","<<j<<")";
            }
        }
    }
    cout<<"No pair found"<<endl;
    return 0;

}