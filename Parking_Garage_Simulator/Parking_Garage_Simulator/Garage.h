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
	Ticket* getTicket(Vehicle* vehicle);
	bool returnVehicle(int ticketNumber);
	int getNumAvailableSlots();
	queue<Vehicle*>& getVehicleQueue();
	vector<Ticket*>& getTickets();


	~Garage();
};

