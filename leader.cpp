#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> leader(const vector<int> &a)
{
    int n=a.size();
    vector<int> result;
    if(n==0)
    {
        return result;
    }
    int max=a[n-1];
    result.push_back(max);
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>max)
        {
            result.push_back(a[i]);
            max=a[i];
        }
    }
reverse(result.begin(),result.end());
return result;
}
int main()
{
    vector<int> a={1,2,4,5,6,7,3};
    vector<int> r=leader(a);
    for(int i:r)
    {
        cout<<i<<" ";

    }
return 0;
}