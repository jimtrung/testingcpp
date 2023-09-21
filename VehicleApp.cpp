#include "VehicleApp.h"
using namespace VehicleApp

VehicleApp(): version("1.0") {}

init() {
    Vehicle *car1 = new Vehicle("BMW");
    Vehicle *car2 = new Vehicle("Kia Morning");
    Vehicle *car3 = new Vehicle("Lambogini");
    Vehicle *car4 = new Vehicle("Mustang");

    VehicleManager::getManager()->addVehicle(car1);
    VehicleManager::getManager()->addVehicle(car2);
    VehicleManager::getManager()->addVehicle(car3);
    VehicleManager::getManager()->addVehicle(car4);
}

start() {
    VehicleManager::getManager()->start();
}