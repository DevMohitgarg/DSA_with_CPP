#include<bits/stdc++.h>
using namespace std;
void powerOfTwo(int n)
{
     while((n%2==0) && n>=1)
    {
        n/=2;
    }
    if(n==1)
    {
        cout<<"Power of 2";
    }
    else
    {
        cout<<n<<"\n";
        cout<<"Not power of 2";
    }
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
   powerOfTwo(n);
}

