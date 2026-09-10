#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include "car.h"
#include "inventory.h"

using namespace std;

class DatabaseManager {
public:
    void saveCarLog(const Car& car) {
        ofstream outFile("car_log.txt", ios::app);
        if (outFile.is_open()) {
            outFile << "Car Log Saved\n";
            outFile.close();
            cout << "\n[DATABASE] Car log successfully saved to disk.\n";
        } else {
            cout << "\n[ERROR] Unable to open database file!\n";
        }
    }

    void saveInventoryLog(const Inventory& item) {
        ofstream outFile("inventory_log.txt", ios::app);
        if (outFile.is_open()) {
            outFile << "Item Saved\n";
            outFile.close();
            cout << "[DATABASE] Inventory log successfully saved to disk.\n";
        } else {
            cout << "[ERROR] Unable to open inventory database file!\n";
        }
    }
};

#endif