#include<bits/stdc++.h>
using namespace std;

void print(int value) {
    cout << "Integer: " << value << endl;
}

void print(float value) {
    cout << "Float: " << value << endl;
}

void print(string& value) {
    cout << "String: " << value << endl;
}

int main() {
    int intValue = 10;
    float floatValue = 3.14;
    string stringValue = "Hello, World!";

    print(intValue);
    print(floatValue);
    print(stringValue);

    return 0;
}
