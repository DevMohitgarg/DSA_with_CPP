#include<bits/stdc++.h>
using namespace std;
int maxElementInArray(vector<int> &arr)
{
    int n = arr.size();
    int max = arr[0];

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    vector<int>arr = {19,29,39,49,3,4,6,12};
    cout<<"Max Element of array is :"<<maxElementInArray(arr);
 return 0;
}