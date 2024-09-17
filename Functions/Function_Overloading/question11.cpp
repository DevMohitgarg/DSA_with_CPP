#include <bits/stdc++.h>

using namespace std;

int reverse(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

float reverse(float num)
{
    string numStr = to_string(num);
    reverse(numStr.begin(), numStr.end());
    return stof(numStr);
}

string reverse(const string &str)
{
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main()
{
    int intVal = 1234;
    float floatVal = 12.34;
    string strVal = "hello";

    cout << "Reversed integer: " << reverse(intVal) << endl;
    cout << "Reversed float: " << reverse(floatVal) << endl;
    cout << "Reversed string: " << reverse(strVal) << endl;

    return 0;
}
