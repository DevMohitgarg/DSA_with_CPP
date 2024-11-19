#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<float>> marks = {
        {90, 87, 86, 65},
        {65, 36, 96, 85},
        {29, 36, 99, 78}}; // 2d

    vector<string> classes = {"Class_A", "Class_B", "Class_C"};

    for (int i = 0; i < 3; i++)
    {
        cout << classes[i] << " ";
        for (int j = 0; j < 4; j++)
        {
            cout << " " << marks[i][j] << ",";
        }
        cout << "\n";
    }
    return 0;
}