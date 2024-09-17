#include <bits/stdc++.h>
using namespace std;

double findAverage(int a, int b)
{
    return (a + b) / 2;
}

double findAverage(int a, int b, int c)
{
    return (a + b + c) / 3;
}

double findAverage(int a, int b, int c, int d)
{
    return (a + b + c + d) / 4;
}

int main()
{

    int num1 = 10, num2 = 20;
    cout << "Average of " << num1 << " and " << num2 << " is " << findAverage(num1, num2) << endl;

    int num3 = 15, num4 = 25, num5 = 35;
    cout << "Average of " << num3 << ", " << num4 << ", and " << num5 << " is " << findAverage(num3, num4, num5) << endl;

    int num6 = 10, num7 = 20, num8 = 30, num9 = 40;
    cout << "Average of " << num6 << ", " << num7 << ", " << num8 << ", and " << num9 << " is " << findAverage(num6, num7, num8, num9) << endl;

    return 0;
}
