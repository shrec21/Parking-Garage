#pragma once
#include "Vehicle.h"
//#include "ParkingSlot.h"
#include <time.h>

class ParkingSlot;

class ParkingLot;

class Ticket
{
private:
	int ticketNo;
	ParkingSlot* parkingSlot;
	ParkingLot* parkingLot;
	time_t inTime;

public:
	Ticket(int ticketNo, ParkingSlot* parkingSlot, ParkingLot* parkingLot);
	int getTicketNo();
	ParkingSlot* getParkingSlot();
	ParkingLot* getParkingLot();
	time_t getInTime();

	~Ticket();
};
