#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrange(vector<int> &a)
{
    vector<int> pos,neg,result;
    for(int i:a)
    {
        if(i>0)
        {
            pos.push_back(i);
        }
        else
        {
            neg.push_back(i);
        }
    }
    for(int i=0;i<a.size();i++)
    {
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }
    return result;
}
int main()
{
    vector<int> a={2,-3,-1,4,-5,8};
    vector<int> result=rearrange(a);
    cout<<"rearrange vector is"<<" ";
    for(int i:result)
    {
        cout<<i<<" ";
    }
    return 0;
}