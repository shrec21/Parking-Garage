
#include "pch.h"
#include <iostream>
#include <string>
#include <queue>

#include "Garage.h"
#include "Vehicle.h"
#include "SUV.h"
#include "Compact.h"
#include "Sedan.h"

using namespace std;

int main()
{
	Garage* garage = new Garage();

	// generate a random number of vehicles to add to the queue
	int numVehicles = rand() % 10;

	// add the vehicles to the queue
	for (int i = 0; i < numVehicles; i++) {
		// generate a random vehicle type
		int vehicleType = rand() % 3;

		// create a vehicle object based on the type
		if (vehicleType == 0) {
			Compact* vehicle = new Compact();
			garage->carQueue.push(vehicle);
		}
		else if (vehicleType == 1) {
			Sedan* vehicle = new Sedan();
			garage->carQueue.push(vehicle);
		}
		else if (vehicleType == 2) {
			SUV* vehicle = new SUV();
			garage->carQueue.push(vehicle);
		}
	}

}


