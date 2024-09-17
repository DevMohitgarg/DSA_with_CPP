#include<bits/stdc++.h>
using namespace std;

int sub(int a,int b)
{
    return a-b;
}
float sub(float f1,float f2)
{
    return f1-f2;
}
long int sub(long int n1,long int n2)
{
    return n1-n2;
}
int main()
{
    int n1=5,n2=2;
    float number1=2.2,number2=4.1;
    long int num1=246810,num2=123456;

    cout<<"Subtraction of two integer : "<<sub(n1,n2)<<endl;
    cout<<"Subtraction of two float : "<<sub(number1,number2)<<endl;
    cout<<"Subtraction of two long integer : "<<sub(num1,num2)<<endl;
 return 0;
}