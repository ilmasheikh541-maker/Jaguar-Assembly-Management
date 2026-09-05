#include <iostream>
#include "car.h"
#include "inventory.h"
#include "database.h"

using namespace std;

int main() {
    Car jaguar(101, "Jaguar F-Pace");
    Inventory engine("V8 Engine", 8);
    DatabaseManager db;

    int choice;
    do {
        cout << "\n==========================================";
        cout << "\n  JAGUAR ASSEMBLY & INVENTORY SYSTEM";
        cout << "\n==========================================";
        cout << "\n1. View Car Status";
        cout << "\n2. Advance Car Assembly Stage";
        cout << "\n3. View Inventory Status";
        cout << "\n4. Consume Engine Stock";
        cout << "\n5. Save All Data to Database File";
        cout << "\n6. Exit System";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                jaguar.displayCar();
                break;
            case 2:
                jaguar.advanceStage();
                break;
            case 3:
                engine.displayItem();
                break;
            case 4:
                engine.consumeStock(2);
                break;
            case 5:
                db.saveCarLog(jaguar);
                db.saveInventoryLog(engine);
                break;
            case 6:
                cout << "\nExiting Jaguar System. Good Luck!\n";
                break;
            default:
                cout << "\nInvalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}