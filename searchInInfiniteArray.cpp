#include <iostream>
using namespace std;

int Binarysearch(int arr[], int low, int high, int x)
{
    // Binary search
}

int search(int arr[], int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }
    if (arr[i] == x)
    {
        return i;
    }

    return Binarysearch(arr, x, (i / 2) + 1, i - 1);
}

int main()
{
    int arr[] = {1, 10, 20, 30, 40, 50, 80, 100, 200, 400};
    int x;
    cin >> x;
    search(arr, x);
}