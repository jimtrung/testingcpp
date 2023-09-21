#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"
#include "VehicleApp.h"
#include "VehicleManager.h"
using namespace std;


int main() {
    VehicleApp *app = new VehicleApp;
    app->init();
    app->start();

    return 0;
}