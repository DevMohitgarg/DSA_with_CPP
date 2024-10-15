//set: it is similar to the vectors but it does't allow you to store
//similar elements more then one time

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);

    for(auto it:s)
    {
        cout<<it<<" ";
    }
 return 0;
}