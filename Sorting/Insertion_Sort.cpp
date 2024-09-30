#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={12,11,13,5,6,9};
    int n = arr.size();
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
         int j=i-1;
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
         arr[j+1] = key;
    }

    for (auto it: arr)
    {
        cout<<it<<" ";
    }
 return 0;
}