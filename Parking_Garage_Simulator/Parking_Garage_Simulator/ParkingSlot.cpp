#include "ParkingSlot.h"
#include "Vehicle.h"
#include "Ticket.h"

using namespace std;


ParkingSlot::ParkingSlot(int slotNo) {
	this->slotNo = slotNo;
	this->isOccupied = false;
	this->vehicle = nullptr;
	this->inTime = 0;
}

int ParkingSlot::getSlotNo() {
	return slotNo;
}

bool ParkingSlot::getIsOccupied() {
	return isOccupied;
}

Vehicle* ParkingSlot::getVehicle() {
	return vehicle;
}

time_t ParkingSlot::getInTime() {
	return inTime;
}

void ParkingSlot::setIsOccupied(bool isOccupied) {
	this->isOccupied = isOccupied;
}

void ParkingSlot::setVehicle(Vehicle* vehicle) {
	this->vehicle = vehicle;
}

void ParkingSlot::setInTime(time_t inTime) {
	this->inTime = inTime;
}

ParkingSlot::~ParkingSlot()
{
	this->vehicle = nullptr;
}
