// #include<bits/stdc++.h>
// using namespace std;
// int missingNumber(vector<int>& arr) {
//         int n = arr.size();
//         int sum = 0;
//         for(auto it: arr)
//         {
//             sum += it;
//         }

//         int ans = (n+1)*(n+2)/2;

//         return ans - sum;
//     }
// int main()
// {
//   vector<int>arr={1,2,4,5,6,7};
//   cout<<missingNumber(arr)<<endl;
//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void missingNumber(vector<int>& arr) {
        int n = arr.size();
        int c = arr[0];
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(c!=arr[i])
            {
                flag=1;
                break;
            }
            c++;
        }
        (flag!=0)?cout<<c:cout<<"ne";
    }
int main()
{
    vector<int>arr={1,2,4,5,6,7};
    missingNumber(arr);
 return 0;
}