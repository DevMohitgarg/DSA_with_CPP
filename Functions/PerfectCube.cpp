#include <iostream>
using namespace std;

bool isPerfectCube(int num)
{
    long left = 0;
    long right = num;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        long cube = mid * mid * mid;
        if (cube == num) {
            return true;
        }
        else if (cube < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    if (isPerfectCube(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}