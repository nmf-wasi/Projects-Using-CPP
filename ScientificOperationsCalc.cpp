#include <bits/stdc++.h>
using namespace std;

void scientificCalculator() 
{
    double num;
    int select;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Select operation: \n1. Square Root\n2. Sin\n3. Cos\n4. Tan\n5. Log\n";
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
    cout<<"Select if you want basic mathematical operations or scientific operations \n 1.Basic Mathematical Operations \n 2.Scientific Operations";
    cin>>input;
    if(input==1)
    {
        scientificCalculator();
    }
    else if(input==2)
    {
        basicMaths();
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}
