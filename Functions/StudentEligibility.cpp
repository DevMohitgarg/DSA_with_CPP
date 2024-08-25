#include<bits/stdc++.h>
using namespace std;
bool isEligible(double percentage){
 return percentage >= 75;
}
int main(){
 double percentage;
 cout <<"Enter the percentage : ";
 cin >> percentage;
 if (isEligible(percentage))
 {
 cout << "Eligible" ;
 }
 else
 {
 cout << "Not Eligible";
 }
 return 0;
}