#include<bits/stdc++.h>
using namespace std;
int minElementinArray(vector<int> &arr)
{
    int n = arr.size();
    int min = arr[0];

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    vector<int>arr = {19,29,39,49,3,4,6,12};
    cout<<"Min Element of array is :"<<minElementinArray(arr);
 return 0;
}