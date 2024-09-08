#include <iostream>

using namespace std;

void generateAndPrintEvens(int n) {
    int evenNumbers[n];
    
    for (int i = 0; i < n; ++i) {
        evenNumbers[i] = 2 * i;
    }

    cout << "First " << n << " even numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of even numbers you want: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "The number of elements must be positive." << endl;
        return 1;
    }
    
    generateAndPrintEvens(n);
    return 0;
}
