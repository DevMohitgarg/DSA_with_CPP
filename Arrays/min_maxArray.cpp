#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int size;
    int max = INT_MIN;
    int min = INT_MAX;

     cout<<"Enter the size of an array:";
     cin>>size;

     for(int i=0;i<size;i++) //for input elements in array
    {
        cin>>arr[i];
    }

    //for maximum
    for(int i=0;i<size;i++) 
    {
        if(arr[i]>max)
        max = arr[i];
    }

     //for minimum
    for(int i=0;i<size;i++) 
    {
        if(arr[i]<min)
        min = arr[i];
    }

    cout<<"Maximum element of an array is:"<<max<<endl;
    cout<<"Minimum element of an array is:"<<min<<endl;

 return 0;
}