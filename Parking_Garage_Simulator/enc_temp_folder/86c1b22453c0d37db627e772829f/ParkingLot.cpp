#include <vector>
#include "ParkingLot.h"
#include "ParkingSlot.h"
#include "Ticket.h"

using namespace std;

ParkingLot::ParkingLot() {
	lotNo = 0;
}
ParkingLot::ParkingLot(int numSlots, int lotNo) {
	this->lotNo = lotNo;
	for (int i = 1; i <= numSlots; i++) {
		slots.push_back(new ParkingSlot(i));
	}
}

int ParkingLot::getLotNo() {
	return lotNo;
}

void ParkingLot::setLotNo(int lotNo) {
	this->lotNo = lotNo;
}


vector<ParkingSlot*>& ParkingLot::getSlots() {
	return slots;
}

queue<Vehicle*>& ParkingLot::getVehicleQueue() {
	return vehicleQueue;
}

void ParkingLot::addToVehicleQueue(Vehicle* vehicle) {
	vehicleQueue.push(vehicle);
}

ParkingSlot* ParkingLot::parkVehicle(Vehicle* vehicle) {
	for (auto slot : slots) {
		if (!slot->getIsOccupied()) {
			slot->setIsOccupied(true);
			slot->setVehicle(vehicle);
			slot->setInTime(time(NULL));
			return slot;
		}
	}
	return nullptr;
}

bool ParkingLot::removeVehicle(int slotNo) {
	for (auto slot : slots) {
		if (slot->getSlotNo() == slotNo && slot->getIsOccupied()) {
			slot->setIsOccupied(false);
			slot->setVehicle(nullptr);
			slot->setInTime(0);
			return true;
		}
	}
	return false;
}

int ParkingLot::getAvailableSlots() {
	int availableSlots = 0;
	for (auto slot : slots) {
		if (!slot->getIsOccupied()) {
			availableSlots++;
		}
	}
	return availableSlots;
}

bool ParkingLot::isLotFull() {
	return getAvailableSlots() == 0;
}




ParkingLot::~ParkingLot()
{
	for (auto slot : slots) {
		delete slot;
	}
	
	
}
