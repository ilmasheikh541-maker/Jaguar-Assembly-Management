#include <iostream>
#include "Car.h"
#include "inventory.h"
#include "database.h"

using namespace std;

int main() {
    cout << "==================================\n";
    cout << "   JAGUAR ASSEMBLY MANAGEMENT    \n";
    cout << "==================================\n\n";

    // 1. Inventory & Car call 
    Inventory shopInventory;
    Car myJaguar;

    // 2. Show stock and select color
    shopInventory.showStock();
    myJaguar.selectColor();

    // 3. Build Car & Database Log
    myJaguar.buildCar(shopInventory);
    myJaguar.displayCarDetails();

    cout << "\n[SUCCESS] Jaguar Assembly Completed Successfully!\n";
    return 0;
}