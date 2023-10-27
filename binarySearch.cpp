#include <iostream>
using namespace std;

int Binarysearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }

        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int indx = Binarysearch(arr, n, x);
    cout << indx;
}