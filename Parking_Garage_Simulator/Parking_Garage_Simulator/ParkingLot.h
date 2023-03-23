#pragma once
#include<vector>
#include<queue>
#include"ParkingSlot.h"
#include "Ticket.h"
#include <time.h>
using namespace std;

class ParkingLot
{

private:
	int lotNo;
	vector<ParkingSlot*> slots;
	queue<Vehicle*> vehicleQueue;
	
	

public:
	ParkingLot();
	ParkingLot(int slots, int lotNo);
	int getLotNo();
	void setLotNo(int lotNo);
	vector<ParkingSlot*>& getSlots();
	queue<Vehicle*>& getVehicleQueue();
	void addToVehicleQueue(Vehicle* vehicle);
	ParkingSlot* parkVehicle(Vehicle* vehicle);
	bool removeVehicle(int slotNo);
	int getAvailableSlots();
	bool isLotFull();



	~ParkingLot();
};
