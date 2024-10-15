//In this we are creating a vector which will work like set

#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &s,int ele)
{
    int flag=0;
        for(int i=0;i<s.size();i++)    //this loop is checking for element not to be repeat in vector
        {
            if(s[i]==ele)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)s.push_back(ele);
}

void Erase(vector<int> &arr,int ele)
{
    cout<<"\n";
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==ele)
        {
            arr.erase(arr.begin()+i,arr.begin()+1);
        }
    }
}
int main()
{
    vector<int>s;
    int ele;
    int n;
    cout<<"Enter the number of elements you want to store in vector:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>ele;
        insert(s,ele);
    }

    for(auto it:s)
    {
        cout<<it<<" ";
    }

    int e=12;
    Erase(s,e);

     for(auto it:s)
    {
        cout<<it<<" ";
    }
 return 0;
}