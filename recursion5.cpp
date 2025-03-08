#include <iostream>
using namespace std;

// print array using recursion
// void print(int arr[], int index)
// {
//     if (index == -1)
//         return;

//     print(arr, index - 1);
//     cout << arr[index] << endl;
// }

// int main()
// {
//     int arr[] = {2, 4, 3, 6, 7, 9};
//     print(arr, 5);
// }

// sum of all element in array
// int sum(int arr[], int index, int n)
// {
//     if (index == n)
//         return 0;

//     return arr[index] + sum(arr, index + 1, n);
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     cout << sum(arr, 0, 5);
// }

// minimum elemnt in array
// int fun(int arr[], int index, int n)
// {
//     if (index == n - 1)
//         return arr[index];

//     return min(arr[index], fun(arr, index + 1, n));
// }

// max element in array
int fun(int arr[], int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return max(arr[index], fun(arr, index + 1, n));
}
int main()
{
    int arr[] = {24, 10, 4, 2, 5, 15};
    cout << fun(arr, 0, 6);
}