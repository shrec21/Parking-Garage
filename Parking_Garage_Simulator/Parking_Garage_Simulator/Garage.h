#pragma once
#include<vector>
#include <queue>
#include <time.h>
#include "Vehicle.h"
#include "ParkingLot.h"
#include"Valet.h"
using namespace std;


class Garage
{

public:
	ParkingLot* parkingLot;
	
	vector<ParkingLot*> lots;
	vector<Ticket*> tickets;
	

	ParkingLot* getParkingLot();
	
	Garage(int numLots, int numSlots);
	void setParkingLot(ParkingLot* parkingLot);
	Ticket* getTicket(Vehicle* vehicle);
	void removeTicket(Ticket* ticket);
	bool returnVehicle(int ticketNumber);
	int getNumAvailableSlots();
	queue<Vehicle*>& getVehicleQueue();
	vector<Ticket*>& getTickets();


	~Garage();
};

