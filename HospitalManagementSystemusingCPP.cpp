#include <bits/stdc++.h>
using namespace std;
vector<Patient> patients;
class Patient
{
    public:
        string Name;
        int age;
        string disease;
            Patient(string Name,int age, string disease)
            {
                this->Name = Name;
                this->age = age;
                this->disease = disease;
            }
};
void admitPatient()
{
    string name;
    int age;
    string disease;
    cin >> name >> age >> disease;
    patients.push_back(Patient(name, age, disease));
    cout << "Patient admitted successfully\n";

}
void dischargePatient()
{
    string name;
    cout << "Enter patient name to discharge: ";
    cin >> name;
    for (auto it = patients.begin(); it != patients.end(); it++)
    {
        if (it->Name == name)
        {
            patients.erase(it);
            cout << "Patient discharged successfully.\n";
            return;
        }
    }
    cout << "Patient not found.\n";
}
void displayPatients()
{
    if (patients.empty())
    {
        cout << "No patients to display" << endl;
        return;
    }
    for (int i = 0; i < patients.size(); i++)
    {
        cout << "Patient's Name: " << patients[i].Name << " "
             << "Patient's Age: " << patients[i].age << " "
             << "Patient's Disease: " << patients[i].disease << endl;
    }
}
int main()
{
    
    while(true)
    {
        int input;
        cout << "\n1. Admit Patient\n2. Discharge Patient\n3. Display Patients\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> input;
        if (input == 1)
                admitPatient();
        else if (input == 2)
                dischargePatient();
        else if (input == 3)
                displayPatients();
        else if (input == 4)
            return 0;
        else
            cout << "Invalid Number, please try again"<<endl;
    }
    return 0;
}