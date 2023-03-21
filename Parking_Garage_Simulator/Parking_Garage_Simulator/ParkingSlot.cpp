#include "ParkingSlot.h"
#include "Vehicle.h"
#include "Ticket.h"
using namespace std;


ParkingSlot::ParkingSlot(int slotNo)
{
	this->slotNo = slotNo;
	this->isOccupied = 0;
	this->inTime = 0;
	this->exitTime = 0;
	this->parkedVehicle = nullptr;
}

int ParkingSlot::getSlotNo() {
	return slotNo;
}


bool ParkingSlot::getIsOccupied() {
	return isOccupied;
}

void ParkingSlot::setIsOccupied(bool isOccupied) {
	this->isOccupied = isOccupied;
}

Vehicle* ParkingSlot::getVehicle() {
	return parkedVehicle;
}

void ParkingSlot::setVehicle(Vehicle* parkedVehicle) {
	this->parkedVehicle = parkedVehicle;
}

Ticket* ParkingSlot::getTicket() {
	return ticket;
}

void ParkingSlot::setTicket(Ticket* ticket) {
	this->ticket = ticket;
}

time_t ParkingSlot::getInTime() {
	return inTime;
}

void ParkingSlot::setInTime(time_t inTime) {
	this->inTime = inTime;
}

time_t ParkingSlot::getExitTime() {
	return exitTime;
}

void ParkingSlot::setExitTime(time_t exitTime) {
	this->exitTime = exitTime;
}

ParkingSlot::~ParkingSlot()
{
}
