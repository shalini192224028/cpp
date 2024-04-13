#include <iostream>
using namespace std;

class Vehicle {
public:
    string model;
    string regNumber;
    double speed; // km/hour
    double fuelCapacity; // liters
    double fuelConsumption; // kiloM

    // Parameterized constructor
    Vehicle(string model, string regNumber, double speed, double fuelCapacity, double fuelConsumption) {
        this->model = model;
        this->regNumber = regNumber;
        this->speed = speed;
        this->fuelCapacity = fuelCapacity;
        this->fuelConsumption = fuelConsumption;
    }

    // Getters and Setters
    void setModel(string model) { this->model = model; }
    string getModel() { return model; }

    void setRegNumber(string regNumber) { this->regNumber = regNumber; }
    string getRegNumber() { return regNumber; }

    void setSpeed(double speed) { this->speed = speed; }
    double getSpeed() { return speed; }

    void setFuelCapacity(double fuelCapacity) { this->fuelCapacity = fuelCapacity; }
    double getFuelCapacity() { return fuelCapacity; }

    void setFuelConsumption(double fuelConsumption) { this->fuelConsumption = fuelConsumption; }
    double getFuelConsumption() { return fuelConsumption; }

    // Method to calculate fuel needed for a given distance
    double fuelNeeded(double distance) {
        return distance * fuelConsumption;
    }

    // Method to calculate distance covered for a given time
    double distanceCovered(double time) {
        return speed * time;
    }

    // Method to display vehicle information
    void display() {
        cout << "Model: " << model << endl;
        cout << "Registration Number: " << regNumber << endl;
        cout << "Speed: " << speed << " km/hour" << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
        cout << "Fuel Consumption: " << fuelConsumption << " kiloM" << endl;
    }
};

class Bus : public Vehicle {
public:
    Bus(string model, string regNumber, double speed, double fuelCapacity, double fuelConsumption)
        : Vehicle(model, regNumber, speed, fuelCapacity, fuelConsumption) {}
};

class Truck : public Vehicle {
public:
    Truck(string model, string regNumber, double speed, double fuelCapacity, double fuelConsumption)
        : Vehicle(model, regNumber, speed, fuelCapacity, fuelConsumption) {}
};

class Transport {
public:
    static void main() {
        // Creating instances of Bus and Truck
        Bus bus("Volvo", "ABC123", 60, 200, 0.1);
        Truck truck("Mack", "XYZ456", 80, 300, 0.2);

        // Displaying information of Bus and Truck
        cout << "Bus Information:" << endl;
        bus.display();
        cout << endl;

        cout << "Truck Information:" << endl;
        truck.display();
        cout << endl;
    }
};

int main() {
    // Calling main method of Transport class
    Transport::main();

    return 0;
}