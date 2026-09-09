#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "inventory.h"
using namespace std;

class Car {
public:
    string modelName;
    string color;
    double price;

    Car() {
        modelName = "Jaguar F-Pace";
        price = 7500000.0; // Base Price
        color = "Black";
    }

    void selectColor() {
        int choice;
        cout << "\n--- SELECT YOUR JAGUAR COLOR ---" << endl;
        cout << "1. Fuji White" << endl;
        cout << "2. Santorini Black" << endl;
        cout << "3. Firenze Red" << endl;
        cout << "Enter color choice (1-3): ";
        cin >> choice;

        if (choice == 1) color = "Fuji White";
        else if (choice == 2) color = "Santorini Black";
        else if (choice == 3) color = "Firenze Red";
        else cout << "Invalid choice! Defaulting to Santorini Black." << endl;
    }

    void buildCar(Inventory &inv) {
        cout << "\nChecking inventory for " << modelName << "..." << endl;
        inv.usePartsForCar(); // Rida ki inventory se parts deduct honge
    }

    void displayCarDetails() {
        cout << "\n=== CAR SPECIFICATIONS ===" << endl;
        cout << "Model: " << modelName << endl;
        cout << "Color: " << color << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "==========================" << endl;
    }
};

#endif