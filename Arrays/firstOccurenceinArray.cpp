#include<bits/stdc++.h>
using namespace std;
void firstOccurence(vector<int> &arr)
{
    int key,ans=-1;
    cout<<"Enter the key :"<<endl;
    cin>>key;
    
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==key)
        {
            ans = i;
            break;
        }
    }
    (ans!=-1)?cout<<"Element found at: "<<ans:cout<<"not exist";
}
int main()
{
    vector<int>arr = {18,21,19,20,21,22,23};
    firstOccurence(arr);

 return 0;
}