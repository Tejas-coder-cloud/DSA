#include<iostream>
using namespace std;
int main()
{
    int nums[5]={6,7,8,9,3};
    int max=nums[0];
    for(int i=0;i<5;i++)
    {
        
        if(nums[i]>max)
        {
            max=nums[i];
        }
    }
    cout<<"Largest element of the array : "<<max<<endl;
    return 0;

    
}