#include <bits/stdc++.h>
using namespace std;

int print2largest(vector<int> &arr) {
    int max1 = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max1)
            max1 = arr[i];
    }

    int smax = INT_MIN; 
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < max1 && arr[i] > smax)
            smax = arr[i];
    }

    return (smax == INT_MIN) ? -1 : smax; 
}

int main() {
    vector<int> arr = {2, 6, 4, 3, 8, 5, 1};
    int secondLargest = print2largest(arr);
    cout << "The second largest element is: " << secondLargest << endl;
    return 0;
}
