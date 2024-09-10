#include <bits/stdc++.h>
using namespace std;
class InventoryItem
{
    public:
        int serial;
        string Name;
        double productID;
        int quantity;
        int price;
        InventoryItem(int serial, string Name, double productID, int quantity, int price)
        {
            this->serial=serial;
            this->Name = Name;
            this->productID = productID;
            this->quantity=quantity;
            this->price = price;
        }
};
vector<InventoryItem> InventoryItems;
void addItem()
{
    int serial;
    string Name;
    double productID;
    int quantity;
    int price;
    cout << "Enter Product serial, productID, quantity & price\n";
    cin>>serial>>Name>>productID>>quantity>>price;
    InventoryItems.push_back(InventoryItem(serial, Name, productID, quantity, price));
    cout << "Product added successfully\n";
}
void viewItem()
{
    if (InventoryItems.empty())
    {
        cout << "No items to display" << endl;
        return;
    }
    for (int i = 0; i < InventoryItems.size(); i++)
    {
        cout << "Serial: " << InventoryItems[i].serial << " "
             << "Name: " << InventoryItems[i].Name << " "
             << "Product ID: " << InventoryItems[i].productID << " "
             << "Quantity: " << InventoryItems[i].quantity << " "
             << "Price: " << InventoryItems[i].price << endl;
    }
}
void SearchItemUsingProductID()
{
    double iD;
    cout << "Enter ID to search: ";
    cin >> iD;
    for (int i = 0; i < InventoryItems.size(); i++)
    {
        if (InventoryItems[i].productID == iD)
        {
            cout << "Serial: " << InventoryItems[i].serial << " "
                 << "Name: " << InventoryItems[i].Name << " "
                 << "Product ID: " << InventoryItems[i].productID << " "
                 << "Quantity: " << InventoryItems[i].quantity << " "
                 << "Price: " << InventoryItems[i].price << endl;
            return;
        }
    }
    cout << "Product Not Found!" << endl;
}
void SearchItemUsingProductName()
{
    string Name;
    cout << "Enter name to search: ";
    getline(cin, Name);
    for (int i = 0; i < InventoryItems.size(); i++)
    {
        if (InventoryItems[i].Name == Name)
        {
            cout << "Serial: " << InventoryItems[i].serial << " "
                 << "Name: " << InventoryItems[i].Name << " "
                 << "Product ID: " << InventoryItems[i].productID << " "
                 << "Quantity: " << InventoryItems[i].quantity << " "
                 << "Price: " << InventoryItems[i].price << endl;
            return;
        }
    }
    cout << "Product Not Found!" << endl;
}
void deleteItem()
{
    string Name;
    cout << "Enter name to delete: ";
    cin.ignore();
    getline(cin, Name);
    auto it = find_if(InventoryItems.begin(), InventoryItems.end(), [&Name](const InventoryItem &student)
                        { 
                          return student.Name == Name; 
                        }
                    );

    if (it != InventoryItems.end())
    {
        InventoryItems.erase(it);
        cout << "Product Deleted!" << endl;
    }
    else
    {
        cout << "Product Not Found!" << endl;
    }
}

int main()
{
    int input;
    string Name, Number, email;

    while (true) 
    {
        cout << "\n1. Add item\n2. View items\n3. Search item using Product ID\n4. Search item using Product Name\n5. Delete item\n6. Exit\n";
        cout << "Enter your input: ";
        cin >> input;

        switch (input)
        {
            case 1:
                addItem();
                break;
            case 2:
                viewItem();
                break;
            case 3:
                SearchItemUsingProductID();
                break;
            case 4:
                SearchItemUsingProductName();
                break;
            case 5:
                deleteItem();
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid input, please try again.\n";
        }
    }
    return 0;
}