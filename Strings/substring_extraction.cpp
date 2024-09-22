#include<bits/stdc++.h>
using namespace std;
int main()
{
    string trackingNumber = "ORD12345098765";

    if(trackingNumber.length()>=6)
    {
        string postalCode = trackingNumber.substr(trackingNumber.length()-6);
        cout << "Postal Code: " << postalCode << endl;
    }
    else {
        cout << "Error: Tracking number is too short to extract postal code." << endl;
    }
 return 0;
}