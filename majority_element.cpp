/*code to return  majoority element of the array 
majority element: the element which occurs more than n/2 where n is size of array
Boyer-Moore Voting Algorithm
*/
#include<iostream>
#include<vector>
using namespace std;
int majority_element(const vector<int>&a,int n)
{
    int count=0,candidate=-1;
    for(int i:a)
    {
        if(count==0)
        {
            candidate=i;
            count=1;
        }
        else if(candidate==i)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count=0;
    for(int i:a)
    {
        if(candidate==i)
        {
            count++;
        }
    }
    if(count>n/2)
    {
        cout<<"The majority element is :"<<candidate;
    }
    else
    {
        cout<<"No majority element is found";
    }
    return 0;
}
int main()
{
    vector<int> a={2,3,5,4};
    int n=a.size();
    majority_element(a,n);
    return 0;
}