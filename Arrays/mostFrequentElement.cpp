#include <bits/stdc++.h>
using namespace std;

int mostFrequent(vector<int> &arr) {
    const int MAX_VALUE = 100; 
    vector<int> count(MAX_VALUE, 0);
  
    for (int num : arr) {
        count[num]++;
    }

    int maxFreq = 0;
    int mostFrequentNum = -1;

    for (int i = 0; i < MAX_VALUE; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            mostFrequentNum = i;
        }
    }

    return mostFrequentNum;
}

int main() {
    vector<int> arr = {21, 19, 18, 20, 21, 22, 23, 19, 18, 19};
    int result = mostFrequent(arr);
    cout << "Most frequent element is: " << result << endl;
    return 0;
}
