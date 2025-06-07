/* Find the element which occured once*/
#include<iostream>
#include<vector>
using namespace std;
int generate( const vector<int> &a )
{
    int n=a.size();
    int count=0,result=0;
    for(int i=0;i<n;i++)
    {
        result^=a[i];
    }
    return result;
}
int main()
{
    vector<int> a={1,1,2,2,3,4,4,5,5};
    cout<<"Element which occured only once is :"<<generate(a);
    return 0;
}