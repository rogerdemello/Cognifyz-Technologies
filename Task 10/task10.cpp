#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

class Inventory {
private:
    vector<Item> items;
    int nextId;

public:
    Inventory() : nextId(1) {}

    void addItem() {
        Item newItem;
        newItem.id = nextId++;

        cout << "Enter item name: ";
        cin.ignore();
        getline(cin, newItem.name);

        cout << "Enter item quantity: ";
        cin >> newItem.quantity;

        cout << "Enter item price: ";
        cin >> newItem.price;

        items.push_back(newItem);
        cout<< "Item added successfully!" << endl;
    }

    void displayItems() const {
        if (items.empty()) {
            cout<< "No items in inventory." << endl;
            return;
        }

        cout << "Inventory List:" << endl;
        for (const auto& item : items) {
            cout<< "ID: " << item.id;
            cout<< ", Name: " << item.name;
            cout<< ", Quantity: " << item.quantity;
            cout<< ", Price: $" << item.price << endl;
        }
    }

    void searchItemById() const {
        int id;
        cout << "Enter item ID to search: ";
        cin >> id;

        for (const auto& item : items) {
            if (item.id == id) {
                cout<< "Item found - ID: " << item.id; 
                cout<< ", Name: " << item.name;
                cout<< ", Quantity: " << item.quantity; 
                cout<< ", Price: $" << item.price << endl;
                return;
            }
        }
        cout << "Item with ID " << id << " not found." << endl;
    }

    void searchItemByName() const {
        string name;
        cout << "Enter item name to search: ";
        cin.ignore();
        getline(cin, name);

        for (const auto& item : items) {
            if (item.name == name) {
                cout << "Item found - ID: " << item.id; 
                cout << ", Name: " << item.name;
                cout << ", Quantity: " << item.quantity;
                cout << ", Price: $" << item.price << endl;
                return;
            }
        }
        cout << "Item with name '" << name << "' not found." << endl;
    }
};

int main() {
    Inventory inventory;
    int choice;

    while (true) {
        cout << "\nInventory Management System" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Display Items" << endl;
        cout << "3. Search Item by ID" << endl;
        cout << "4. Search Item by Name" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inventory.addItem();
                break;
            case 2:
                inventory.displayItems();
                break;
            case 3:
                inventory.searchItemById();
                break;
            case 4:
                inventory.searchItemByName();
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
