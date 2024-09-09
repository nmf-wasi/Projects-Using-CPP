#include <bits/stdc++.h>
using namespace std;
bool isPrimeNumber(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(num); i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int input;
    cout << "Input a number to see if it's a prime number" << endl;
    cin >> input;
    if (isPrimeNumber(input))
        cout << input << " is a Prime Number" << endl;
    else
        cout << input << " is not a Prime Number" << endl;
    return 0;
}