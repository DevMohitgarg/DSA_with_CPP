#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of co-ordinates";
    cin>>x;
    cin>>y;

    if(x>0 && y>0 ){
        cout<<"First Quadrant"<<endl;
    }
    else if(x<0 && y>0 ){
        cout<<"Second Quadrant"<<endl;
    }
    else if(x<0 && y<0 ){
        cout<<"Third Quadrant"<<endl;
    }
    if(x>0 && y<0 ){
        cout<<"Fourth Quadrant"<<endl;
    }
 return 0;
}