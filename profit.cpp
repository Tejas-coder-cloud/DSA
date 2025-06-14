/* Code to find maximum profit of stock 
condition : you have to first buy and then sell the stock,you can't do the reverse of this statement
each element of the array/vector represents the size of the stock on that day 
profit =sell-price
*/
#include<iostream>
#include<vector>
using namespace std;
void profit(const vector<int> &a)
{ 
    int min_index=a[0],profit=0;
    if(a.size()<2)
    {
        cout<<"The array consists of insufficient number of elements";
    }
    for(int i=0;i<a.size();i++)
    {
        min_index=min(a[i],min_index);
        int profit1=a[i]-min_index;
        profit=max(profit1,profit);
    }
    cout<<"Maximum profit is "<<profit;
}
int main()
{
    vector<int> a={1,2,3,4,5};
    profit(a);
    return 0;
}    