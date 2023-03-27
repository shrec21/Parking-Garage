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
#include <ctime>
#include <time.h>

using namespace std;

int main() {
	
	int numLots = 2;
	int numSlots = 10;
	int numValets = 5;
	int simulationTime = 30; 
	int revenue = 0;

	Garage parkingGarage(numLots,numSlots);

	vector<Valet*> valets;
	for (int i = 1; i <= numValets; i++) {
		valets.push_back(new Valet(i));
	}

	int itTime = 0;
	while (itTime < simulationTime) {


		int parkedSlotNo=0;

		int lotNo = parkingGarage.getParkingLot()->getLotNo();
		int numAvailableSlots = parkingGarage.getParkingLot()->getAvailableSlots();
		int numVehiclesInQueue = parkingGarage.getVehicleQueue().size();
		cout << "Time: " << itTime << " Lot: " << lotNo << " - Available slots: " << numAvailableSlots
			/*<< " - Vehicles in queue: " << numVehiclesInQueue*/ << endl;


		if (itTime % 3 == 0) {
			Vehicle* vehicle = new Vehicle();
			ParkingLot* pLot = parkingGarage.getParkingLot();
			pLot->addToVehicleQueue(vehicle);
			
		}

		for (auto& valet : valets) {
			if (valet->getIsFree() && !parkingGarage.getVehicleQueue().empty()) {
				Vehicle* vehicle = parkingGarage.getVehicleQueue().front();
				//ParkingLot* pLot = parkingGarage.getParkingLot();
				Ticket* ticket = parkingGarage.getTicket(vehicle);
				parkedSlotNo = ticket->getParkingSlot()->getSlotNo();
				cout << "\nVehicle of type "<<vehicle->getVehicleType()<<" is parked in Lot - " << parkingGarage.getParkingLot()->getLotNo() << " Slot - " << parkedSlotNo << endl << endl;
				parkingGarage.getVehicleQueue().pop();
				valet->setIsFree(false);
				revenue += vehicle->getPrice();

				
			}
		}

		int randTicket = rand() % 50;

		for (auto& valet : valets) {
			if (!valet->getIsFree()) {
				vector<Ticket*>& tickets = parkingGarage.getTickets(); //how to pop an element from a vector
				int ticketsSize = tickets.size();
				
				
				if (randTicket < ticketsSize && tickets[randTicket]) {
					Ticket* currTicket = tickets[randTicket];
					//out << currTicket->getInTime() << endl;
					int lotNo = currTicket->getParkingLot()->getLotNo();
					int slotNo = currTicket->getParkingSlot()->getSlotNo();
					bool success = parkingGarage.getParkingLot()->removeVehicle(slotNo);
					if (success) {
						valet->setIsFree(true);
						cout << "\nvehicle removed from : Lot - " << lotNo << " Slot - " << slotNo << endl << endl;
					}
					
				}

				   // checks if the ticket is expired

				for (auto& ticket : tickets) {
					time_t now = time(0);
					if (now - ticket->getExitTime() > 30) {
						int lotNo = ticket->getParkingLot()->getLotNo();
						int slotNo = ticket->getParkingSlot()->getSlotNo();
						bool success = parkingGarage.getParkingLot()->removeVehicle(slotNo);
						if (success) {
							valet->setIsFree(true);
							cout << "\n expired ticked : vehicle removed from : Lot - " << lotNo << " Slot - " << slotNo << endl << endl;
						}
					}
				}
				
				
			}
		}

		

		int randInt = rand() % 20;
		if (randInt < numValets) {
			valets[randInt]->setIsFree(true);
		}

		

		itTime++;
		Sleep(1000); 
		
	}
	cout << "\n The Total Revenue For the day is : Rs. " << revenue << endl;
	return 0;
}



