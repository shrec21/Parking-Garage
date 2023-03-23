#include "Ticket.h"
#include "Vehicle.h"
#include "ParkingSlot.h"
#include "ParkingLot.h"

Ticket::Ticket(int ticketNo, ParkingSlot* parkingSlot, ParkingLot* parkingLot) {
	this->ticketNo = ticketNo;
	this->parkingSlot = parkingSlot;
	this->parkingLot = parkingLot;
	this->inTime = time(NULL);
}

int Ticket::getTicketNo() {
	return ticketNo;
}

ParkingSlot* Ticket::getParkingSlot() {
	return parkingSlot;
}

ParkingLot* Ticket::getParkingLot() {
	return parkingLot;
}

time_t Ticket::getInTime() {
	return inTime;
}

Ticket::~Ticket()
{
	this->parkingSlot = nullptr;
	this->parkingLot = nullptr;
}
