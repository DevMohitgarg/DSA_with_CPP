#include <bits/stdc++.h>
using namespace std;
int Arraysum(vector<int> &arr)
{
  int size = arr.size();
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}
int main()
{
  vector<int> arr={1,2,3,4,5,6};
  cout << "Sum of the array elements is: " << Arraysum(arr) << endl;
  return 0;
}