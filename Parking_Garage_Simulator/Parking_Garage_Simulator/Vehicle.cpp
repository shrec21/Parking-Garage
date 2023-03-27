#include "pch.h"
#include "Vehicle.h"
#include <string>

int Vehicle::vid = 101;

using namespace std;



Vehicle::Vehicle()
{
	vehicleId = vid + rand();
	if (vehicleId % 3 == 0) {
		type = "Compact";
		this->price = 50;
	}
	else if (vehicleId % 3 == 1) {
		type = "SUV";
		this->price = 100;
	}
	else if (vehicleId % 3 == 2) {
		type = "Sedan";
		this->price = 150;
	}
	vid++;
	
}

int Vehicle::getPrice() {
	return price;
}

int  Vehicle::getVehicleId() const {
	return vehicleId;
}

string  Vehicle::getVehicleType() const {
	return type;
}

int Vehicle::getSlotPosition() {

}

Vehicle::~Vehicle() {

}