#include <iostream>
using namespace std;

void generateFibonacci(int fib[], int n) {
    if (n >= 1) fib[0] = 0; // First Fibonacci number
    if (n >= 2) fib[1] = 1; // Second Fibonacci number

    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void printFibonacci(int fib[], int n) {
    cout << "Fibonacci series up to " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fib[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX_SIZE = 100; 
    int n;

    cout << "Enter the number of Fibonacci elements you want (up to " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "The number of elements must be positive and less than or equal to " << MAX_SIZE << "." << endl;
        return 1;
    }

    int fib[MAX_SIZE];

    generateFibonacci(fib, n);

    printFibonacci(fib, n);

    return 0;
}
