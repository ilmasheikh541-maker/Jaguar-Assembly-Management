#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include <string>
#include "car.h"
#include "inventory.h"

using namespace std;

class DatabaseManager {
public:
    void saveCarLog(const Car& car) {
        ofstream outFile("cars_log.txt", ios::app);
        if (outFile.is_open()) {
            outFile << "ID: " << car.getCarID() 
                    << " | Model: " << car.getModelName() 
                    << " | Stage: " << car.getAssemblyStage() << endl;
            outFile.close();
            cout << "\n[DATABASE] Car log successfully saved to disk.\n";
        } else {
            cout << "\n[ERROR] Unable to open database file!\n";
        }
    }

    void saveInventoryLog(const Inventory& item) {
        ofstream outFile("inventory_log.txt", ios::app);
        if (outFile.is_open()) {
            outFile << "Item: " << item.getItemName() 
                    << " | Quantity: " << item.getQuantity() << endl;
            outFile.close();
            cout << "[DATABASE] Inventory log successfully saved to disk.\n";
        } else {
            cout << "[ERROR] Unable to open database file!\n";
        }
    }
};

#endif