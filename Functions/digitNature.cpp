#include <bits/stdc++.h>
using namespace std;

string category(char ch) 
{
    if (ch>='0' && ch<='9') 
    {
        return "Digit";
    } 
    else if (ch>='A' && ch<='Z') 
    {
        return "Uppercase letter";
    } 
    else if (ch >='a' && ch<='z') 
    {
        return "Lowercase letter";
    } 
    else 
    {
        return "Special character";
    }
}

int main() 
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    string ans = category(ch);
   cout<<ans;
    
    return 0;
}