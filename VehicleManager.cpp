#include "VehicleManager.h"
using namespace VehicleManager;

VehicleManager *getManager() {
    if(manager == NULL) {
        manager = new VehicleManager();
    }

    return manager;
}

start() {
    for(Vehicle* vehicle: vehicles) {
        vehicle->run();
    }
}

addVehicle(Vehicle *vehicle) {
    vehicles.push_back(vehicle);
}