#include <bits/stdc++.h>
using namespace std;
vector<InventoryItem> InventoryItems;
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
    string name;
    cout<<
}
void SearchItemUsingProductName()
{
    string name;
    cout<<
}
void deleteItem()
{
    string name;
    cout<<
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
                searchItem();
                break;
            case 4:
                deleteItem();
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