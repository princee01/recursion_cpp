#include <iostream>
using namespace std;
// void fun1(int n)
// {
//     if (n == 0)
//     {
//         cout << "happy birthday";
//         return;
//     }
//     cout << n << "days left for birthday" << endl;
//     fun1(n - 1);
// }
// int main()
// {
//     fun1(3);
// }

// print n to 1 numbers
// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n << endl;
//     print(n - 1);
// }
// int main()
// {
//     print(10);
// }

// print n to 2 even numbers
void even(int n)
{
    // if (n == -2)
    // {
    //     return;
    // }
    if (n == 2)
    {
        cout << n;
        return;
    }
    cout << n << endl;
    even(n - 2);
}
int main()
{
    even(10);
}