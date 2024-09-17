#include <bits/stdc++.h>
using namespace std;

void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapValues(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void swapValues(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

int main()
{

    int int1 = 5, int2 = 10;
    float float1 = 3.14f, float2 = 1.59f;
    char char1 = 'A', char2 = 'B';

    cout << "Before swapping:" << endl;
    cout << "Integers: " << int1 << " and " << int2 << endl;
    cout << "Floats: " << float1 << " and " << float2 << endl;
    cout << "Characters: " << char1 << " and " << char2 << endl;

    swapValues(int1, int2);
    swapValues(float1, float2);
    swapValues(char1, char2);

    cout << "After swapping:" << endl;
    cout << "Integers: " << int1 << " and " << int2 << endl;
    cout << "Floats: " << float1 << " and " << float2 << endl;
    cout << "Characters: " << char1 << " and " << char2 << endl;

    return 0;
}
