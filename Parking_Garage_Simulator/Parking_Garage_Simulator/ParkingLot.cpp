
#include<vector>
#include "ParkingLot.h"
#include "ParkingSlot.h"
#include "Ticket.h"


using namespace std;

ParkingLot::ParkingLot(int lotNo, int maxCapacity)
{
	this->lotNo = lotNo;
	this->maxCapacity = maxCapacity;
	this->currCapacity = 0;
	for (int i = 0; i < maxCapacity; i++) {
		ParkingSlot slot(i + 1);
		slots.push_back(slot);
	}
	//this->slots.reserve(maxCapacity);
}

int ParkingLot::getLotNo() {
	return lotNo;
}

int ParkingLot::getAvailableSlots() {
	int availableSlots = 0;
	for (auto& slot : slots) {
		if (!slot.getIsOccupied()) {
			availableSlots++;
		}
	}
	return availableSlots;
}

int ParkingLot::getOccupiedSlots() {
	int occupiedSlots = 0;
	for (auto& slot : slots) {
		if (slot.getIsOccupied()) {
			occupiedSlots++;
		}
	}
	return occupiedSlots;
}

bool ParkingLot::isLotFull() {
	int availableSlots = getAvailableSlots();
	if (availableSlots == 0)return 1;
	else return 0;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
	if (isLotFull()) return 0;
	for (auto& slot : slots) {
		if (!slot.getIsOccupied()) {
			slot.setVehicle(vehicle);
			return 1;
		}
	}

}

bool ParkingLot::removeVehicle(int slotNo){
	if (slotNo < 1 || slotNo > maxCapacity) {
		return 0;
	}

	ParkingSlot& slot = slots[slotNo - 1];  //slot inside the vector, that is why i referenced
	if (!slot.getIsOccupied()) {
		return 0;
	}

	slot.getVehicle();
	slot.setVehicle(nullptr);
	return 1;
}

int ParkingLot:: findVehicleSlot(Vehicle* vehicle) {
	for (auto& slot : slots) {
		if (slot.getIsOccupied() && slot.getVehicle() == vehicle) {
			return slot.getSlotNo();
		}
	}
	return -1;
}

int ParkingLot::createTicket(Vehicle* vehicle) {
	if (isLotFull()) {
		return -1;
	}
	for (auto& slot : slots) {
		if (!slot.getIsOccupied()) {
			slot.setVehicle(vehicle);
			Ticket ticket;
			ticket.setLotNo(getLotNo());
			ticket.setParkedVehicle(vehicle);
			ticket.setSlotNo(slot.getSlotNo());
			ticket.setVehicleId(vehicle->getVehicleId());
			return ticket.getTicketNo();
		}
	}
}

int ParkingLot::checkTicket(int ticketNo) {
	for (auto& slot : slots) {
		if (slot.getIsOccupied() && slot.getTicket()->getTicketNo() == ticketNo) {
			return slot.getSlotNo();
		}
	}
	return -1;
}

ParkingLot::~ParkingLot()
{
}
