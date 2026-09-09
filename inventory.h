#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
using namespace std;

class Inventory {
public:
    int engines;
    int tires;
    int chassis;

    // Default Stock
    Inventory() {
        engines = 10;
        tires = 40;
        chassis = 10;
    }

    void showStock() {
        cout << "\n=== JAGUAR SPARE PARTS INVENTORY ===" << endl;
        cout << "1. Engines Available: " << engines << endl;
        cout << "2. Tires Available: " << tires << endl;
        cout << "3. Chassis Available: " << chassis << endl;
        cout << "====================================" << endl;
    }

    void usePartsForCar() {
        if(engines > 0 && tires >= 4 && chassis > 0) {
            engines -= 1;
            tires -= 4;
            chassis -= 1;
            cout << "Parts used for 1 Jaguar successfully!" << endl;
        } else {
            cout << "Low Stock! Cannot build car." << endl;
        }
    }
};

#endif
