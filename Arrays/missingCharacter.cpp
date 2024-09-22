#include <bits/stdc++.h>
using namespace std;

int main() {
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i', 'j'};
    bool found;

    for (char ch = 'a'; ch <= 'j'; ++ch) {
        found = false;
        for (char letter : letters) {
            if (ch == letter) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Missing letter: " << ch << endl;
        }
    }

    return 0;
}
