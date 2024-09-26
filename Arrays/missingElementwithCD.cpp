//missing element with common difference

#include<bits/stdc++.h>
using namespace std;
void missingElement(vector<int> & arr)
{
   int count = arr[0];
   int cd = arr[1]-arr[0];
   int flag=0;

   for(int i=0;i<arr.size();i++)
   {
      if(count!=arr[i])
      {
        flag=1;
        break;
      }
      count += cd;
   }
   (flag!=0)?cout<<count:cout<<"NE";
}
int main()
{
    vector<int>arr={1,3,5,7,11,13};
    missingElement(arr);
 return 0;
}