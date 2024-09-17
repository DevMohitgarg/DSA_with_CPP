#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

float max(float a, float b) {
    return (a > b) ? a : b;
}

string max(string& a,string& b) {
    return (a > b) ? a : b;
}

int main() {
   
    int int1 = 10, int2 = 20;
    float float1 = 5.5, float2 = 3.3;
    string str1 = "apple", str2 = "banana";

    cout << "Maximum of " << int1 << " and " << int2 << " is " << max(int1, int2) << endl;
    cout << "Maximum of " << float1 << " and " << float2 << " is " << max(float1, float2) << endl;
    cout << "Maximum of \"" << str1 << "\" and \"" << str2 << "\" is \"" << max(str1, str2) << "\"" << endl;

    return 0;
}
