#include <iostream>
using namespace std;

// Iterative Method

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
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

// Recursive Method

int search(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    if (x > arr[mid])
    {
        return search(arr, mid + 1, high, x);
    }
    else if (x < arr[mid])
    {
        return search(arr, low, mid - 1, x);
    }

    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return search(arr, low, mid - 1, x);
        }
    }
}

int main()
{
    int arr[] = {2, 4, 4, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int indx = search(arr, n, x);
    cout << indx;
}
