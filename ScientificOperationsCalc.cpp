#include <bits/stdc++.h>
using namespace std;

void scientificCalculator() 
{
    double num;
    int select;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Select operation: " << endl
         << "1. Square Root" << endl
         << "2. Sin" << endl
         << "3. Cos" << endl
         << "4. Tan" << endl
         << "5. Log" << endl;
    cin >> select;

    switch (select) 
    {
        case 1:
            cout << "Square Root: " << sqrt(num) << endl;
            break;
        case 2:
            cout << "Sine: " << sin(num) << endl;
            break;
        case 3:
            cout << "Cosine: " << cos(num) << endl;
            break;
        case 4:
            cout << "Tangent: " << tan(num) << endl;
            break;
        case 5:
            cout << "Logarithm: " << log(num) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}

void basicMaths()
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
}
int main() 
{
    int input;
    cout << "" << endl
         << "1.Basic Mathematical Operations" << endl << "2.Scientific Operations "<<endl;
    cin >>input;
    if(input==1)
        scientificCalculator();
    else if(input==2)
        basicMaths();
    else
        cout<<"Invalid Input"<<endl;
    return 0;
}
