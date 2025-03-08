#include <iostream>
#include <vector>
using namespace std;
// permutation wihtoud repeating element
//  void permute(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
//  {
//      if (temp.size() == visited.size())
//      {
//          ans.push_back(temp);
//          return;
//      }
//      for (int i = 0; i < visited.size(); i++)
//      {
//          if (visited[i] == 0)
//          {
//              visited[i] = 1;
//              temp.push_back(arr[i]);
//              permute(arr, ans, temp, visited);
//              visited[i] = 0;
//              temp.pop_back();
//          }
//      }
//  }
//  int main()
//  {
//      int arr[] = {1, 2, 3};
//      vector<vector<int>> ans;
//      vector<int> temp;
//      vector<bool> visited(3, 0);
//      permute(arr, ans, temp, visited);
//      for (int i = 0; i < ans.size(); i++)
//      {
//          for (int j = 0; j < ans[i].size(); j++)
//          {
//              cout << ans[i][j] << " ";
//          }
//          cout << endl;
//      }
//  }

// permutation method2
// void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
// {
//     if (index == arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }
//     for (int i = index; i < arr.size(); i++)
//     {
//         swap(arr[i], arr[index]);
//         permut(arr, ans, index + 1);
//         swap(arr[i], arr[index]);
//     }
// }

// permutation with repeating elements
void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    vector<bool> check(21, 0);

    for (int i = index; i < arr.size(); i++)
    {

        if (check[arr[i] + 10] == 0)
        {
            swap(arr[index], arr[i]);
            permut(arr, ans, index + 1);
            swap(arr[index], arr[i]);
            check[arr[i] + 10] = 1;
        }
    }
}
int main()
{
    vector<int> arr = {1, 1, 3};
    vector<vector<int>> ans;
    permut(arr, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}