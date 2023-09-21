#include "Vehicle.h"
using namespace Vehicle

Vehicle(string mn): modelName(mn) {}

setModelName(string mn) {
    modelName = mn;
}

getModelName() {
    return modelName;
}

setOwnerName(string on) {
    ownerName = on;
}

getOwnerName() {
    return ownerName;
}

setLicensePlate(string lp) {
    licensePlate = lp;
}

getLicensePlate() {
    return licensePlate;
}

run() {
    cout << modelName << " is running...!\n";
}
