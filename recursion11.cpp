#include <iostream>
#include <vector>
using namespace std;
// subset sum using recursion
//  void subsum(int arr[], int index, int n, int sum, vector<int> &ans)
//  {
//      if (index == n)
//      {
//          ans.push_back(sum);
//          return;
//      }
//      // include
//      subsum(arr, index + 1, n, sum + arr[index], ans);
//      // exclude
//      subsum(arr, index + 1, n, sum, ans);
//  }
//  int main()
//  {
//      int arr[] = {1, 2, 3};
//      vector<int> ans;
//      subsum(arr, 0, 3, 0, ans);
//      for (int i = 0; i < ans.size(); i++)
//      {
//          cout << ans[i] << endl;
//      }
//  }

// target sum
// bool find(int arr[], int index, int n, int sum, int target)
// {
//     if (index == n)
//     {
//         if (sum == target)
//             return 1;
//         else
//             return 0;
//     }

//     return find(arr, index + 1, n, sum + arr[index], target) || find(arr, index + 1, n, sum, target);
// }

// perfect sum
// int find(int arr[], int index, int n, int sum, int target)
// {
//     if (index == n)
//     {
//         if (sum == target)
//             return 1;
//         else
//             return 0;
//     }
//     return find(arr, index + 1, n, sum + arr[index], target) + find(arr, index + 1, n, sum, target);
// }

// target sum repetation
int fun(int arr[], int index, int n, int target)
{

    if (target == 0)
        return 1;
    if (index == n || target < 0)
        return 0;

    return fun(arr, index, n, target - arr[index]) + fun(arr, index + 1, n, target);
}
int main()
{
    int arr[] = {2, 3, 4};
    int target = 6;
    cout << fun(arr, 0, 3, target);
}