#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[1000];

    for(int i=0;i<size;i++) //for input elements in array
    {
        cin>>arr[i];
    }

   for(int i=0;i<size;i++) //for output elements in array
    {
        cout<<arr[i]<<endl;
    }

 return 0;
}