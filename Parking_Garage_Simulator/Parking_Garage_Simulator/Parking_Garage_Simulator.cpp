#include "pch.h"
#include<windows.h> 
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include "Garage.h"
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Valet.h"
#include <time.h>

using namespace std;

int main() {
	
	int numLots = 2;
	int numSlots = 10;
	int numValets = 2;
	int simulationTime = 120; 

	Garage parkingGarage(numLots,numSlots);

	vector<Valet*> valets;
	for (int i = 1; i <= numValets; i++) {
		valets.push_back(new Valet(i));
	}

	int time = 0;
	while (time < simulationTime) {
		int parkedSlotNo=0;
		if (time % 5 == 0) {
			Vehicle* vehicle = new Vehicle();
			ParkingLot* pLot = parkingGarage.getParkingLot();
			pLot->addToVehicleQueue(vehicle);
			Ticket* ticket = parkingGarage.getTicket(vehicle);
			parkedSlotNo = ticket->getParkingSlot()->getSlotNo();
		}

		for (auto& valet : valets) {
			if (valet->getIsFree() && !parkingGarage.getVehicleQueue().empty()) {
				Vehicle* vehicle = parkingGarage.getVehicleQueue().front();
				if (valet->parkVehicle(vehicle, parkingGarage.getParkingLot())) {
					cout << "\nvehicle parked int : Lot - " << parkingGarage.getParkingLot()->getLotNo() << " Slot - " << parkedSlotNo << endl << endl;
					parkingGarage.getVehicleQueue().pop();
				}
			}
		}

		
		for (auto& valet : valets) {
			if (!valet->getIsFree()) {
				vector<Ticket*> tickets = parkingGarage.getTickets(); //how to pop an element from a vector
				int ticketsSize = tickets.size();
				int randTicket = rand() % 10;
				if (randTicket < ticketsSize) {
					Ticket* currTicket = tickets[randTicket];
					int lotNo = currTicket->getParkingLot()->getLotNo();
					int slotNo = currTicket->getParkingSlot()->getSlotNo();
					valet->removeVehicle(slotNo, parkingGarage.getParkingLot());
					cout << "\nvehicle removed from : Lot - "<< lotNo<<" Slot - "<< slotNo<<endl<<endl;
				}
				 
				
			}
		}


		int lotNo = parkingGarage.getParkingLot()->getLotNo();
		int numAvailableSlots = parkingGarage.getParkingLot()->getAvailableSlots();
		int numVehiclesInQueue = parkingGarage.getVehicleQueue().size();
		cout << "Time: " << time << " Lot: " << lotNo << " - Available slots: " << numAvailableSlots
			/*<< " - Vehicles in queue: " << numVehiclesInQueue*/ << endl;

		time++;
		Sleep(1000); 
	}

	return 0;
}



