include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
    Vehicle() {}

    Vehicle(string mn): modelName(mn) {}

    void setModelName(string mn) {
        modelName = mn;
    }

    string getModelName() {
        return modelName;
    }

    void setOwnerName(string on) {
        ownerName = on;
    }

    string getOwnerName() {
        return ownerName;
    }

    void setLicensePlate(string lp) {
        licensePlate = lp;
    }

    string getLicensePlate() {
        return licensePlate;
    }

    void run() {
        cout << modelName << " is running...!\n";
    }

    protected:
    string modelName;
    string ownerName;
    string licensePlate;
};