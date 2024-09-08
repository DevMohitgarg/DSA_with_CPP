#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[1000];
  int size;
  int sum = 0;

  cout<<"Enter the size of an array: ";
  cin>>size;
  
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }

  for(int i=0;i<size;i++)
  {
    sum += arr[i];
  }

  cout<<"Sum of the array elements is: "<<sum<<endl;
 return 0;
}