#include "pch.h"
#include "Vehicle.h"
#include <string>



using namespace std;

Vehicle::Vehicle()
{
	vehicleId = 0;
	type = "";
}

Vehicle::Vehicle(int vehicleId, string type)
{
	this->vehicleId = vehicleId;
	this->type = type;
	
}

int  Vehicle::getVehicleId() const {
	return vehicleId;
}

string  Vehicle::getVehicleType() const {
	return type;
}

Vehicle::~Vehicle() {

}