#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {6, 8, 14, 3, 9};
    int start = 0, end = 4;
    cout << "Before Reversing:"<<endl;;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "After Reversing:"<<endl;
    for (int i = 0; i <= 4 ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}