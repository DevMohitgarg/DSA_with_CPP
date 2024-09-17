#include <bits/stdc++.h>
using namespace std;

int compare(int a, int b)
{
    return (a > b) ? a : b;
}

float compare(float a, float b)
{
    return (a > b) ? a : b;
}

char compare(char a, char b)
{
    return (a > b) ? a : b;
}

int main()
{

    int int1 = 42, int2 = 27;
    cout << "Greater integer between " << int1 << " and " << int2 << " is " << compare(int1, int2) << endl;

    float float1 = 3.14, float2 = 2.71;
    cout << "Greater float between " << float1 << " and " << float2 << " is " << compare(float1, float2) << endl;

    char char1 = 'x', char2 = 'm';
    cout << "Greater character between " << char1 << " and " << char2 << " is " << compare(char1, char2) << endl;

    return 0;
}
