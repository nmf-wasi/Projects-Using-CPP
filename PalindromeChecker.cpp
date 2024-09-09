#include <bits/stdc++.h>
using namespace std;
string input;
bool isPalindrome()
{
    int left = 0;
    int right = input.size() - 1;
    while (left < right)
    {
        if (input[left] != input[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    cout << "Input a String to check if it's palindrome or not" << endl;
    cin >> input;
    if (isPalindrome())
        cout << input << " is Palindrome" << endl;
    else
        cout << input << " is not Palindrome" << endl;
    return 0;
}
