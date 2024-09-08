 #include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int isPrime(int count)
{
    if (count <= 3)
    {
        return true;
    }

    if (count % 2 == 0 || count % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= count; i++)
    {
        if (count % i == 0)
        {
            return false;
        }
    }

    return true;
}

void printPrimeNumber(int n)
{
    int arr[n];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            arr[i] = 1;
            break;
        }
        if (n == 2)
        {
            arr[i] = 1;
            arr[i + 1] = 2;
            break;
        }
        else
        {
            while (!isPrime(count))
            {
                count++;
            }
            arr[i] = count;
            count++;
        }
    }
    printArray(arr, n);
}

int main()
{
    int n;
    cout << "Enter The Number of Prime Number: ";
    cin >> n;

    printPrimeNumber(n);
    return 0;
}