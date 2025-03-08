#include <iostream>
using namespace std;
// check if string is panidrome
//  bool ispal(string str, int start, int end)
//  {
//      if (str[start] != str[end])
//      {
//          return false;
//      }

//     ispal(str, start + 1, end - 1);
//     return true;
// }

// /check vowels
// int vowel(string str, int index)
// {
//     if (index == -1)
//         return 0;
//     if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//     {
//         return 1 + vowel(str, index - 1);
//     }
//     else
//         return vowel(str, index - 1);
// }

// reverse a string
// void rev(string &str, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     char c = str[start];
//     str[start] = str[end];
//     str[end] = c;

//     rev(str, start + 1, end - 1);
// }
void upper(string &str, int index)
{
    if (index == -1)
    {
        return;
    }
    upper(str, index - 1);
    str[index] = 'A' + str[index] - 'a';
}
int main()
{
    string str = "prince";

    // rev(str, 0, str.size() - 1);
    // cout << str;
    upper(str, 5);
    cout << str;
}