#include <iostream>
using namespace std;

// linear search
// int fuc(int arr[], int start, int end, int x)
// {
//     if (start == end)
//     {
//         return -1;
//     }

//     if (arr[start] == x)
//     {
//         return start;
//     }

//     return fuc(arr, start + 1, end, x);
// }
// int main()
// {
//     int arr[] = {2, 4, 7, 3, 11, 8, 12};
//     int x = 4;
//     cout << fuc(arr, 0, 6, x);
// }

// binary search in array
bool fun(int arr[], int start, int end, int x)
{
    if (start > end)
    {
        return 0;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
        return 1;

    else
    {
        if (arr[mid] < x)
            return fun(arr, mid + 1, end, x);
        else
            return fun(arr, start, mid - 1, x);
    }
}
int main()
{
    int arr[] = {3, 8, 11, 15, 20, 22};
    int x = 15;
    cout << fun(arr, 0, 5, x);
}