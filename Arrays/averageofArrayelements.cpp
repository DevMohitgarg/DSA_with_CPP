#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
  int size,average;
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
  
  average = sum/size;
  cout<<"Average of array elements is: "<<average<<endl;

 return 0;
}