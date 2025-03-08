#include <iostream>
using namespace std;
// print 1 to N
// method 1
// void print(int n, int N)
// {

//     if (n == N)
//     {
//         cout << n;
//         return;
//     }
//     cout << n << endl;
//     print(n + 1, N);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     print(1, N);
// }

// methhod two
// void print(int num)
// {
//     if (num == 1)
//     {
//         cout << num << endl;
//         return;
//     }
//     print(num - 1);
//     cout << num << endl;
// }
// int main()
// {
//     int num;
//     cin >> num;
//     print(num);
// }

// print 2 to N even number
// void even(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     even(n - 2);
//     cout << n << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     even(n);
// }
void fun(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    fun(n - 1);
    cout << n << " ";
}
int main()
{
    int n; // stopping number
    cin >> n;
    fun(n);
}