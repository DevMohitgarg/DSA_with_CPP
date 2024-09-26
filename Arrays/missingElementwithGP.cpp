#include<bits/stdc++.h>
using namespace std;
void missingElementGp(vector<int> &arr)
{
  int count = arr[0];
  int cr = arr[1]/arr[0];
  int flag=0;

  for(int i=0;i<arr.size();i++)
  {
    if(count!=arr[i])
    {
        flag=1;
        break;
    }
    count *= cr;
  }
  (flag!=0)?cout<<count:cout<<"NE";
}
int main()
{
    vector<int>arr={1,2,4,16,32,64};
    missingElementGp(arr);
 return 0;
}