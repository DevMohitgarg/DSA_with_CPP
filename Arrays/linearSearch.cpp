#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
  int key,flag=0,index;
  cout<<"Enter the key:"<<endl;
  cin>>key;

  for(int i=0;i<arr.size()-1;i++)
  {
    if(arr[i]==key)
    {
        flag = 1;
        index = i;
        break;
    }
  }

  flag?cout<<"Found at:"<<index:cout<<"not exist";
 return 0;
}