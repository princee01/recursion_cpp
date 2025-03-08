#include <iostream>
using namespace std;
// factorial of a number
// int fac(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }

//     return n * fac(n - 1);
// }

// sum of n numbers
// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + sum(n - 1);
// }

// power of any number
// int pow2(int n, int m) // n= no. of power
// {
//     if (m == 1)
//     {
//         return n;
//     }
//     return n * pow2(n, m - 1);
// }

// sum of square of N number
int sos(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * n + sos(n - 1);
}
int main()
{
    int n, m;
    cin >> n;
    // cin >> m;
    // cout << sum(5);
    // cout << pow2(n, m);
    cout << sos(n);
}