#include <iostream>
#include <string>

using namespace std;

// Base class Vehicle
class Vehicle {
public:
    float mileage;
    float price;

public:
    Vehicle(float mileage, float price) : mileage(mileage), price(price) {}
};

// Subclass Car
class Car : public Vehicle {
public:
    float ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;

public:
    Car(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, string fuelType)
        : Vehicle(mileage, price), ownershipCost(ownershipCost), warranty(warranty), seatingCapacity(seatingCapacity), fuelType(fuelType) {}
};

// Subclass Bike
class Bike : public Vehicle {
public:
    int numCylinders;
    int numGears;
    string coolingType;
    string wheelType;
    float fuelTankSize;

public:
    Bike(float mileage, float price, int numCylinders, int numGears, string coolingType, string wheelType, float fuelTankSize)
        : Vehicle(mileage, price), numCylinders(numCylinders), numGears(numGears), coolingType(coolingType), wheelType(wheelType), fuelTankSize(fuelTankSize) {}
};

// Subclass Audi of Car
class Audi : public Car {
public:
    string modelType;

public:
    Audi(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, string fuelType, string modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelType), modelType(modelType) {}
};

// Subclass Ford of Car
class Ford : public Car {
public:
    string modelType;

public:
    Ford(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, string fuelType, string modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelType), modelType(modelType) {}
};

// Subclass Bajaj of Bike
class Bajaj : public Bike {
public:
    string makeType;

public:
    Bajaj(float mileage, float price, int numCylinders, int numGears, string coolingType, string wheelType, float fuelTankSize, string makeType)
        : Bike(mileage, price, numCylinders, numGears, coolingType, wheelType, fuelTankSize), makeType(makeType) {}
};

// Subclass TVS of Bike
class TVS : public Bike {
public:
    string makeType;

public:
    TVS(float mileage, float price, int numCylinders, int numGears, string coolingType, string wheelType, float fuelTankSize, string makeType)
        : Bike(mileage, price, numCylinders, numGears, coolingType, wheelType, fuelTankSize), makeType(makeType) {}
};

int main() {
    // Creating objects for Audi and Ford cars
    Audi audi(15.5, 5000000, 1000000, 5, 5, "Petrol", "A6");
    Ford ford(12.5, 4000000, 900000, 4, 5, "Diesel", "Figo");

    // Creating objects for Bajaj and TVS bikes
    Bajaj bajaj(45, 150000, 2, 5, "Air", "Spokes", 10, "Pulsar");
    TVS tvs(50, 160000, 2, 6, "Liquid", "Alloys", 12, "Apache");

    // Printing information of Audi car
    cout << "Audi Car Information:" << endl;
    cout << "Model Type: " << audi.modelType << endl;
    cout << "Ownership Cost: " << audi.ownershipCost << endl;
    cout << "Warranty: " << audi.warranty << " years" << endl;
    cout << "Seating Capacity: " << audi.seatingCapacity << endl;
    cout << "Fuel Type: " << audi.fuelType << endl;
    cout << "Mileage: " << audi.mileage << endl;
    cout << "Price: " << audi.price << endl;

    // Printing information of Ford car
    cout << "\nFord Car Information:" << endl;
    cout << "Model Type: " << ford.modelType << endl;
    cout << "Ownership Cost: " << ford.ownershipCost << endl;
    cout << "Warranty: " << ford.warranty << " years" << endl;
    cout << "Seating Capacity: " << ford.seatingCapacity << endl;
    cout << "Fuel Type: " << ford.fuelType << endl;
    cout << "Mileage: " << ford.mileage << endl;
    cout << "Price: " << ford.price << endl;

    // Printing information of Bajaj bike
    cout << "\nBajaj Bike Information:" << endl;
    cout << "Make Type: " << bajaj.makeType << endl;
    cout << "Number of Cylinders: " << bajaj.numCylinders << endl;
    cout << "Number of Gears: " << bajaj.numGears << endl;
    cout << "Cooling Type: " << bajaj.coolingType << endl;
    cout << "Wheel Type: " << bajaj.wheelType << endl;
    cout << "Fuel Tank Size: " << bajaj.fuelTankSize << endl;
    cout << "Mileage: " << bajaj.mileage << endl;
    cout << "Price: " << bajaj.price << endl;

    // Printing information of TVS bike
    cout << "\nTVS Bike Information:" << endl;
    cout << "Make Type: " << tvs.makeType << endl;
    cout << "Number of Cylinders: " << tvs.numCylinders << endl;
    cout << "Number of Gears: " << tvs.numGears << endl;
    cout << "Cooling Type: " << tvs.coolingType << endl;
    cout << "Wheel Type: " << tvs.wheelType << endl;
    cout << "Fuel Tank Size: " << tvs.fuelTankSize << endl;
    cout << "Mileage: " << tvs.mileage << endl;
    cout << "Price: " << tvs.price << endl;

    return 0;
}
