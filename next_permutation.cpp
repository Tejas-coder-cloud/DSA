// need to revise 
// code to return the next permutation of the array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutation( vector<int> &a)
{
    int n=a.size();
    int i=n-2;
    while(i>=0 && a[i]>=a[i+1])
    {
        i--;
    }
    if(i>=0)
    {
        int j=n-1;
        while(a[i]<=a[j])
        {
            j--;
        }
        swap(a[i],a[i+1]);

    }
    reverse(a.begin()+i+1,a.end());
}
int main()
{
    vector<int> a={1,2,3};
    permutation(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}