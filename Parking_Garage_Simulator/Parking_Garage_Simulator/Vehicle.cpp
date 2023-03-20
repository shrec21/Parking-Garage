#include "pch.h"
#include "Vehicle.h"
#include <string>

int Vehicle::vid = 101;

using namespace std;



Vehicle::Vehicle()
{
	this->vehicleId = vid;
	if (vid % 3 == 0) {
		type = "Compact";
		this->price = 50;
	}
	else if (vid % 3 == 1) {
		type = "SUV";
		this->price = 100;
	}
	else if (vid % 3 == 2) {
		type = "Sedan";
		this->price = 150;
	}
	vid++;
	
}

int  Vehicle::getVehicleId() const {
	return vehicleId;
}

string  Vehicle::getVehicleType() const {
	return type;
}

Vehicle::~Vehicle() {

}