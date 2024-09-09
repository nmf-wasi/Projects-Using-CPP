#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    char c;
    cout<<"Enter a Number"<<endl;
    cin>>a;
    while(a)
    cout<<"Enter a mathemetical Symbol"<<endl;
    cin>>c;
    while (c != '+' && c != '-' && c != '*' && c != '/') 
    {
        cout << "Invalid Symbol, Please Enter a valid mathematical Symbol" << endl;
        cin >> c;
    }
    cout<<"Enter another Number"<<endl;
    cin>>b;
    if(c=='+')
        cout << a + b << endl;
    else if (c=='-')
        cout << a - b << endl;
    if (c == '*')
        cout << a * b << endl;
    else if (c == '/')
        cout << a / b << endl;

    return 0;
}