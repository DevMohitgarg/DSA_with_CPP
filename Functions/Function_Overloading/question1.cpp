#include <bits/stdc++.h>
using namespace std;

int add(int n1, int n2) {
    return n1 + n2;
}

float add(float f1, float f2) {
    return f1 + f2;
}

string add(string& s1,string& s2) {
    return s1 + s2;
}

int main() {
    int num1, num2;
    float n1, n2;
    string s1, s2;

    cout << "Enter the integer numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the float values: ";
    cin >> n1 >> n2;

   
    cout << "Enter the strings: ";
    cin >> s1 >> s2;

    cout << "Sum of integers: " << add(num1, num2) << endl;
    cout << "Sum of floats: " << add(n1, n2) << endl;
    cout << "Concatenated strings: " << add(s1, s2) << endl;

    return 0;
}
