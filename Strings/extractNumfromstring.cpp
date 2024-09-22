#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    string s="Contact: 123-456-7890";
    vector<string>res;
    stringstream ss(s);
    string word;
    while(getline(ss,word,'-'))
    {
        res.push_back(word);
    }
    for(auto it:res)
    {
        cout<<it<<" ";
    }
 
}