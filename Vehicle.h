#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicle
{
    public:
    Vehicle() {}

    Vehicle(string mn) {}

    void setModelName(string mn) {}

    string getModelName() {}

    void setOwnerName(string on) {}

    string getOwnerName() {}

    void setLicensePlate(string lp) {}

    string getLicensePlate() {}

    void run() {}

    protected:
    string modelName;
    string ownerName;
    string licensePlate;
};
