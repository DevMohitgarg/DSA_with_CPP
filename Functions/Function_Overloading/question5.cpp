#include<bits/stdc++.h>
using namespace std;

int multi(int a,int b)
{
    return a*b;
}
double multi(float f1,float f2)
{
    return f1*f2;
}
double multi(int n,float f)
{
    return n*f;
}
int main()
{
    int n1=5,n2=2;
    float num1=2.2,num2=4.1;
    int num=4;
    float n=4.3;

    cout<<"Multiplication of two integer : "<<multi(n1,n2)<<endl;
    cout<<"Multiplication of two float : "<<multi(num1,num2)<<endl;
    cout<<"Multiplication of an integer and float : "<<multi(num,n)<<endl;
 return 0;
}