#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("zoom.txt");
    char c;
    c = fin.get();
    while (!fin.eof())
    {
        cout << c;
        c = fin.get();
    }

    fin.close();
    return 0;
}