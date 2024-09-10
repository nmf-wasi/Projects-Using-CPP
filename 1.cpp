#include <iostream>
#include <unordered_map>
using namespace std;

class InventoryItem
{
public:
    int id;
    string name;
    int quantity;
    double price;

    InventoryItem(int id, string name, int qty, double price) : id(id), name(name), quantity(qty), price(price) {}

    void display()
    {
        cout << "ID: " << id << ", Name: " << name << ", Quantity: " << quantity << ", Price: " << price << endl;
    }
};

class Inventory
{
private:
    unordered_map<int, InventoryItem> items;

public:
    void addItem(int id, string name, int quantity, double price)
    {
        items[id] = InventoryItem(id, name, quantity, price);
        cout << "Item added successfully!" << endl;
    }

    void removeItem(int id)
    {
        if (items.erase(id))
        {
            cout << "Item removed successfully!" << endl;
        }
        else
        {
            cout << "Item not found!" << endl;
        }
    }

    void searchItem(int id)
    {
        if (items.find(id) != items.end())
        {
            items[id].display();
        }
        else
        {
            cout << "Item not found!" << endl;
        }
    }

    void displayAllItems()
    {
        for (const auto &item : items)
        {
            item.second.display();
        }
    }
};

int main()
{
    Inventory inv;
    inv.addItem(101, "Laptop", 10, 70000.0);
    inv.addItem(102, "Mouse", 50, 500.0);
    inv.searchItem(101);
    inv.removeItem(102);
    inv.displayAllItems();
    return 0;
}
