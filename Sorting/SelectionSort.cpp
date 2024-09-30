#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr)
 {
    for (int i = 0; i < arr.size(); i++) 
    {
        int maxIndex = i; 
        for (int j = i + 1; j < arr.size(); j++) 
        { 
            if (arr[j] > arr[maxIndex]) 
            { 
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
        for (auto it : arr) 
    {
        cout << it << " "; 
        }
    cout << endl;
    }
}

int main() 
{
    vector<int> arr = {19, 18, 17, 1, 2, 9, 90};
    
    SelectionSort(arr);
    
    
    
    return 0;
}
