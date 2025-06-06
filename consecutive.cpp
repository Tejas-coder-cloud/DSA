/* code to find maximum number of consecutive 1s*/
#include<iostream>
#include<vector>
using namespace std;
int maximum( const vector<int> &a)
{
   int current=0;
   int maximum=0;
   for(int i:a)
   {
    if(i==1)
    {
        current++;
        maximum=max(maximum,current);
    }
    else
    {
        current=0;
    }
   }
   return maximum;
}
int main()
{
    vector<int> a={0,1,1,0,1,1,1,1,1,0,0,1};
    cout<<"Maximum number of consecutive 1s in the array :"<<" "<<maximum(a);
    return 0;

}