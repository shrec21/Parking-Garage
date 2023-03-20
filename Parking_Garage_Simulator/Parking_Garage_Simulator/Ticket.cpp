#include "Ticket.h"
#include "Vehicle.h"
#include "ParkingSlot.h"
#include "ParkingLot.h"

Ticket::Ticket()
{
	this->parkedVehicle = nullptr;
	this->parkedSlot = nullptr;
	this->parkedLot = nullptr;
	this->vehicleId = 0;
	this->lotNo = 0;
	this->slotNo = 0;
	this->inTime = 0;
	this->exitTime = 0;
	this->price = 0;
}

Vehicle* Ticket::getParkedVehicle() {
	return parkedVehicle;
}

void Ticket::setParkedVehicle(Vehicle *parkedVehicle) {
	this->parkedVehicle = parkedVehicle;
}

ParkingSlot* Ticket::getParkedSlot() {
	return parkedSlot;
}

void Ticket::setParkedSlot(ParkingSlot *parkedSlot) {
	this->parkedSlot = parkedSlot;
}

ParkingLot* Ticket::getParkedLot() {
	return parkedLot;
}

void Ticket::setParkedSlot(ParkingSlot *parkedSlot) {
	this->parkedSlot = parkedSlot;
}

int Ticket::getVehicleId() {
	return parkedVehicle->getVehicleId();
}

void Ticket::setVehicleId(int vehicleId) {
	this->vehicleId =  parkedVehicle->getVehicleId();
}

int Ticket::getSlotNo() {
	return parkedSlot->getSlotNo;
}

void Ticket::setSlotNo(int vehicleId) {
	this->slotNo = parkedSlot->getSlotNo;
}

Ticket::~Ticket()
{
}
