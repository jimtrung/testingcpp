#include <iostream>
#include <string>
#include <vector>
using namespace std;

class VehicleManager
{
    public:

    static VehicleManager *getManager() {}

    void start() {}

    void addVehicle(Vehicle *vehicle) {}

    private:
    vector < Vehicle *> vehicles;
    static VehicleManager *manager;
};

VehicleManager* VehicleManager::manager = NULL;