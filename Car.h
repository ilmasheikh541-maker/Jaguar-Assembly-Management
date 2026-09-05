#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int carID;
    string modelName;
    string assemblyStage; // 1. Chassis, 2. Paint, 3. Engine, 4. Quality Check

public:
    Car() {
        carID = 0;
        modelName = "";
        assemblyStage = "Chassis Frame";
    }

    Car(int id, string model) {
        carID = id;
        modelName = model;
        assemblyStage = "Chassis Frame";
    }

    int getCarID() const {
        return carID;
    }

    string getModelName() const {
        return modelName;
    }

    string getAssemblyStage() const {
        return assemblyStage;
    }

    // Assembly stage Update logic
    void advanceStage() {
        if (assemblyStage == "Chassis Frame") {
            assemblyStage = "Paint Job";
            cout << "\n[SUCCESS] Car ID " << carID << " moved to Paint Job Stage.\n";
        } else if (assemblyStage == "Paint Job") {
            assemblyStage = "Engine Fitting";
            cout << "\n[SUCCESS] Car ID " << carID << " moved to Engine Fitting Stage.\n";
        } else if (assemblyStage == "Engine Fitting") {
            assemblyStage = "Quality Check";
            cout << "\n[SUCCESS] Car ID " << carID << " moved to Final Quality Check.\n";
        } else {
            cout << "\n[INFO] Car ID " << carID << " is already Fully Assembled!\n";
        }
    }

    // Car Details Display Function
    void displayCar() const {
        cout << "Car ID: " << carID 
             << " | Model: " << modelName 
             << " | Current Stage: " << assemblyStage << endl;
    }
};

#endif