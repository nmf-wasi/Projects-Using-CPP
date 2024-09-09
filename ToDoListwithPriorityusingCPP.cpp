#include <bits/stdc++.h>
using namespace std;
class Task
{
public:
    string name;
    int priority_serial;
    Task(string name, int priority_serial)
    {
        this->name = name;
        this->priority_serial = priority_serial;
    }
};
class compare
{
public:
    bool operator()(Task &a, Task &b)
    {
        if (a.priority_serial > b.priority_serial)
            return true;
        else if (a.priority_serial < b.priority_serial)
            return false;
        else
        {
            int input;
            cout << "There is another task with same priority serial, " << a.name << " and " << b.name << " where do you want to list it? 1.Above 2.Below";
            cin >> input;
            if (input==1)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Task, vector<Task>, compare> Lia;
    for (int i = 0; i < n; i++)
    {
        string name;
        int priority_serial;
        cin >> name >> priority_serial;
        Task obj(name, priority_serial);
        Lia.push(obj);
    }

    while (!Lia.empty())
    {
        cout << Lia.top().name << " " << Lia.top().priority_serial << endl;
        Lia.pop();
    }
    return 0;
}