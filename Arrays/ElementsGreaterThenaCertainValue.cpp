#include<bits/stdc++.h>
using namespace std;
void elementGreatThanVal(vector<int> &arr)
{
    int n = arr.size();
    int x;
    cout<<"Enter the key element: "<<endl;
    cin>>x;
    vector<int>result;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            result.push_back(arr[i]);
        }
    }
    for(auto it:result)
    {
        cout<<it<<" ";
    }
}
int main()
{ 
    vector<int>arr = {1,4,5,7,8,9,10,11,12};
    elementGreatThanVal(arr);
 return 0;
}