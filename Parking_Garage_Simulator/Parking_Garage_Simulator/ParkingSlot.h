#pragma once
#include <time.h>
#include "Ticket.h"
#include "Vehicle.h"

class ParkingSlot
{
private:
	int slotNo;
	bool isOccupied;
	Vehicle* vehicle;
	time_t inTime;

public:
	ParkingSlot(int slotNo);
	int getSlotNo();
	bool getIsOccupied();
	Vehicle* getVehicle();
	time_t getInTime();
	void setIsOccupied(bool isOccupied);
	void setVehicle(Vehicle* vehicle);
	void setInTime(time_t inTime);

	~ParkingSlot();
};
