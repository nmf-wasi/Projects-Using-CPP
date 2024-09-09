#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string Name;
        string Number;
        string email;
            Student(string Name, string Number, string email)
            {
                this->Name=Name;
                this->Number=Number;
                this->email = email;
            }
};
vector<Student> students;
void addContacts()
{
    string Name, Number, email;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, Name);
    cout << "Enter phone number: ";
    getline(cin, Number);
    cout << "Enter email: ";
    getline(cin, email);
    students.push_back(Student(Name, Number, email));
    cout << "Contact Added!";
}
void viewContacts()
{
    if (students.empty())
    {
        cout << "No contacts available\n";
        return;
    }
    for(int i=0;i<students.size();i++)
    {
        cout << "Student's Name: " << students[i].Name << "  Student's phone number: " << students[i].Number << "  Student's email: " << students[i].email << endl;
    }
}
void searchContact()
{
    string Name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, Name);
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].Name == Name)
        {
            cout << "Student's Name: " << students[i].Name << "  Student's phone number: " << students[i].Number << "  Student's email: " << students[i].email << endl;
            return;
        }
    }
    cout << "Contact Not Found!" << endl;
}
void deleteContact()
{
    string Name;
    cout << "Enter name to delete: ";
    cin.ignore();
    getline(cin, Name);
    auto it = find_if(students.begin(), students.end(), [&Name](const Student &student)
                        { 
                            return student.Name == Name; 
                        }
                     );

    if (it != students.end())
    {
        students.erase(it);
        cout << "Contact Deleted!" << endl;
    }
    else
    {
        cout << "Contact Not Found!" << endl;
    }
}
int main()
{
    int input;
    string Name, Number, email;

    while (true) 
    {
        cout << "\n1. Add Contact\n2. View Contacts\n3. Search Contact\n4. Delete Contact\n5. Exit\n";
        cout << "Enter your input: ";
        cin >> input;

        switch (input)
        {
            case 1:
                addContacts();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid input, please try again.\n";
        }
    }
    return 0;
}