#include <bits/stdc++.h>
using namespace std;
int power(int base, int exponent)
{

    return pow(base, exponent);
}

float power(float base, int exponent)
{
    return pow(base, exponent);
}

float power(int base, float exponent)
{
    return pow(base, exponent);
}

int main()
{

    cout << "2 raised to the power of 3 is " << power(2, 3) << endl;
    cout << "2.5 raised to the power of 3 is " << power(2.5f, 3) << endl;
    cout << "2 raised to the power of 3.5 is " << power(2, 3.5f) << endl;

    return 0;
}
