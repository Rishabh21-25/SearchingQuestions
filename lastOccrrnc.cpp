#include <iostream>
using namespace std;

//  ITERATIVE Method

int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }

        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

// Recursive Method

int search(int arr[], int low, int high, int x, int n)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    if (x > arr[mid])
    {
        return search(arr, mid + 1, high, x, n);
    }
    else if (x < arr[mid])
    {
        return search(arr, low, mid - 1, x, n);
    }

    else
    {
        if (mid == n - 1 || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else
        {
            return search(arr, mid + 1, high, x, n);
        }
    }
}

int main()
{
    int arr[] = {2, 4, 6, 6, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int indx = search(arr, 0, 6, x, n);
    cout << indx;
}