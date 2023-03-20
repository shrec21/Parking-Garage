#include<vector>
#include "ParkingLot.h"
#include "ParkingSlot.h"

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

int ParkingLot::getAvailableSlots() {
	int availableSlots = 0;
	for (auto slot : slots) {
		if (!slot.getIsOccupied()) {
			availableSlots++;
		}
	}
	return availableSlots;
}

bool ParkingLot::isLotFull() {

}

ParkingLot::~ParkingLot()
{
}
