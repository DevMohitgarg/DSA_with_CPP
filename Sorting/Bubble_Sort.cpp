#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {19,18,12,21,16,15};
    int n = arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
 return 0;
} 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>arr = {19,18,12,21,16,15};
//     int n = arr.size();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(auto it:arr)
//     {
//         cout<<it<<" ";
//     }
//  return 0;
// }