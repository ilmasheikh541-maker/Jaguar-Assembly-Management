#include <iostream>
#include "inventory.h"
#include "car.h"
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "   WELCOME TO JAGUAR SHOWROOM SYSTEM    " << endl;
    cout << "========================================" << endl;

    Inventory shopInventory;
    Car myJaguar;          

    // 1. Show available parts
    shopInventory.showStock();

    // 2. Select Car Color
    myJaguar.selectColor();

    // 3. Build Car & Deduct Parts
    myJaguar.buildCar(shopInventory);

    // 4. Show Final Details
    myJaguar.displayCarDetails();

    cout << "\nThank you for using Jaguar System!" << endl;
    return 0;
}