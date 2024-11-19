#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>names={"Prajjal","Ajay","Shivam"};
    vector<int>age={25,22,20};
    vector<vector<int>>marks={
      {26,98,55,60},
      {76,65,85,92},
      {55,58,82,63}
    };

    for(int i=0;i<3;i++){
        cout<<i<<" ";
        cout<<names[i]<<" ";
        cout<<" "<<age[i]<<" ";
        cout<<" [";
        for(int j=0;j<3;j++)
        {
            cout<<marks[i][j]<<",";
        }
        cout<<"]";
        cout<<"\n";
    }
 return 0;
}