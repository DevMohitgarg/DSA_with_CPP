#include<bits/stdc++.h>
using namespace std;
int CountOccurence(vector<int> &arr)
{ 
    int n=arr.size();
    int count = 0;
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int>arr={18,21,19,20,21,22,23,19,18,19};
    cout<<"Total occurence of the key element is: "<<CountOccurence(arr);
 return 0;
}