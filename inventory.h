#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>

using namespace std;

class Inventory {
private:
    string itemName;
    int quantity;

public:
    Inventory() {
        itemName = "";
        quantity = 0;
    }

    Inventory(string name, int qty) {
        itemName = name;
        quantity = qty;
    }

    string getItemName() const { return itemName; }
    int getQuantity() const { return quantity; }

    void addStock(int qty) {
        quantity += qty;
        cout << "\n[SUCCESS] Added " << qty << " units to " << itemName << ".\n";
    }

    void consumeStock(int qty) {
        if (qty <= quantity) {
            quantity -= qty;
            cout << "\n[SUCCESS] Used " << qty << " units of " << itemName << ".\n";
            if (quantity < 5) {
                cout << "[CRITICAL WARNING] Low Stock Alert for " << itemName << "! Remaining: " << quantity << "\n";
            }
        } else {
            cout << "\n[ERROR] Not enough stock available for " << itemName << "!\n";
        }
    }

    void displayItem() const {
        cout << "Item: " << itemName << " | Quantity Available: " << quantity << endl;
    }
};

#endif