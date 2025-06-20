/*code to sort an array consisting of only 0,1,2 such that all  zeroes are printed first then all one's are printed
then all 2's are printed  less optimized approach

#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &a)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            cout<<a[i]<<" ";
        }
    }
}
int main()
{
    vector<int> a={1,2,2,0,0,1};
    cout<<"Sorted array is given below :"<<endl;
    sort(a);
    return 0;
}
*/
// optimized approach
#include<iostream>
#include<vector>
using namespace std;
void sortcolors(vector<int> &a)
{
    int low=0,mid=0,high=a.size()-1;
    while(mid<=high)
    {
        switch(a[mid])
        {
            case 0:
            swap(a[low++],a[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(a[mid],a[high--]);
            break;
        }
    }
} 
int main()
{
    vector<int> a={0,1,2,1,2,0,0};
    sortcolors(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}