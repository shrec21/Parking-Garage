#include "pch.h"
#include "Valet.h"


Valet::Valet(int id) {
	this->id = id;
	this->isFree = true;
}

int Valet::getId() {
	return id;
}

bool Valet::getIsFree() {
	return isFree;
}

void Valet::setIsFree(bool isFree) {
	this->isFree = isFree;
}

bool Valet::parkVehicle(Vehicle* vehicle, ParkingLot* parkingLot) {
	if (!isFree) {
		return false;
	}
	ParkingSlot* slot = parkingLot->parkVehicle(vehicle);
	if (slot != nullptr) {
		isFree = false;
		return true;
	}
	return false;
}

bool Valet::removeVehicle(int slotNo, ParkingLot* parkingLot) {
	if (!isFree) {
		bool success = parkingLot->removeVehicle(slotNo);
		if (success) {
			isFree = true;
			return true;
		}
	}
	return false;
}

Valet::~Valet()
{
}
