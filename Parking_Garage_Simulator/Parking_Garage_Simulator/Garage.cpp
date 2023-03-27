#include "pch.h"
#include "Garage.h"

Garage::Garage(int numLots, int numSlots) {
	for (int i = 1; i <= numLots; i++) {
		int lotNo = i;
		lots.push_back(new ParkingLot(numSlots, lotNo));
	}
}

void Garage::setParkingLot(ParkingLot* parkingLot) {
	this->parkingLot = parkingLot;
}

Ticket* Garage:: getTicket(Vehicle* vehicle) {
	ParkingSlot* slot = parkingLot->parkVehicle(vehicle);
	if (slot != nullptr) {
		int ticketNumber = rand() % 1000 + 1;
		Ticket* ticket = new Ticket(ticketNumber, slot, parkingLot);
		tickets.push_back(ticket);
		return ticket;
	}
	return nullptr;
}

void Garage::removeTicket(Ticket* ticket) {
	for (auto& ticket : tickets) {
		if (ticket == ticket) {
			
				delete ticket;
				
			
		}
	}
}

bool Garage::returnVehicle(int ticketNumber) {
	for (auto& ticket : tickets) {
		if (ticket->getTicketNo() == ticketNumber) {
			ParkingSlot* slot = ticket->getParkingSlot();
			if (parkingLot->removeVehicle(slot->getSlotNo())) {
				tickets.erase(find(tickets.begin(), tickets.end(), ticket));
				delete ticket;
				return true;
			}
		}
	}
	return false;
}

int Garage::getNumAvailableSlots() {
	int count = 0;
	for (auto& slot : parkingLot->getSlots()) {
		if (!slot->getIsOccupied()) {
			count++;
		}
	}
	return count;
}

queue<Vehicle*>& Garage:: getVehicleQueue() {
	return parkingLot->getVehicleQueue();
}



ParkingLot* Garage::getParkingLot() {
	int lotLen = lots.size();
	for (int i = 0; i <= lotLen; i++) {
		parkingLot = lots[i];
		if (!parkingLot->isLotFull()) {
			return parkingLot;
		}
	}
	return nullptr;
	
}



vector<Ticket*>& Garage::getTickets() {
	return tickets;
}

Garage::~Garage()
{
	parkingLot = nullptr;
	
	for (auto& lot : lots) {
		delete lot;
	}
	for (auto& ticket : tickets) {
		delete ticket;
	}
}
