#pragma once
#include "Garage.h"
#include "Ticket.h"
class Valet
{
private:
	int id;
	bool isFree;
public:
	Valet(int id);
	int getId();
	bool getIsFree();
	void setIsFree(bool isFree);
	bool parkVehicle(Vehicle* vehicle, ParkingLot* parkingLot);
	bool removeVehicle(int slotNo, ParkingLot* parkingLot);

	~Valet();
};

