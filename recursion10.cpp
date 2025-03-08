#include <string>
#include <vector>
#include <iostream>
using namespace std;
// //quick sort program
// int partition(int arr[], int start, int end)
// {
//     int pos = 0;
//     for (int i = 0; i <= end; i++)
//     {
//         if (arr[i] <= arr[end])
//         {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     return pos - 1;
// }
// // recursion part
// void quicksort(int arr[], int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int pivot = partition(arr, start, end);
//     quicksort(arr, start, pivot - 1);
//     quicksort(arr, pivot + 1, end);
// }
// int main()
// {
//     int arr[] = {6, 2, 5, 1, 4, 2, 3};
//     quicksort(arr, 0, 6);
//     for (int i = 0; i <= 6; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// print all subsets of power set
// void subseq(string &s, int index, int n, vector<string> &ans, string &temp)
// {
//     if (index == n)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     subseq(s, index + 1, n, ans, temp);
//     temp.push_back(s[index]);
//     subseq(s, index + 1, n, ans, temp);
//     temp.pop_back();
// }
// int main()
// {
//     string s = "abc";
//     vector<string> ans;
//     string temp;
//     subseq(s, 0, s.size(), ans, temp);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << endl;
//     }
// }

// sum of all the subsets
// void subsum(int arr[], int index, int n, int sum)
// {
//     if (index == n)
//     {
//         cout << sum << endl;
//         return;
//     }
//     subsum(arr, index + 1, n, sum + arr[index]);
//     subsum(arr, index + 1, n, sum);
// }
// int main()
// {
//     int sum = 0;
//     int arr[] = {1, 2, 3};

//     subsum(arr, 0, 3, sum);
//     return sum;
// }

// target sum
bool istarget(int arr[], int index, int n, int target, int sum)
{
    if (index == n)
    {
        if (sum != target)
            return 0;
        else
            return 1;
    }
    // include
    return istarget(arr, index + 1, n, target, sum + arr[index]) || istarget(arr, index + 1, n, target, sum);
    // exclude
}
int main()
{
    int arr[] = {3, 6, 4, 5};
    int target = -10;
    cout << istarget(arr, 0, 4, target, 0);
}