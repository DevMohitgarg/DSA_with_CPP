#include <bits/stdc++.h>
using namespace std;

bool areAllElementsUnique(int arr[], int n) {
    int MAX_VALUE = 1000; 
    if (n > MAX_VALUE) return false; 

    vector<bool> seen(MAX_VALUE, false);

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 || arr[i] > MAX_VALUE) {
            return false; 
        }
        if (seen[arr[i]]) {
            return false; 
        }
        seen[arr[i]] = true; 
    }

    return true; 
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << (areAllElementsUnique(arr1, n1) ? "All elements are unique" : "Elements are not unique") << endl;

    int arr2[] = {1, 2, 3, 4, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << (areAllElementsUnique(arr2, n2) ? "All elements are unique" : "Elements are not unique") << endl;

    return 0;
}
