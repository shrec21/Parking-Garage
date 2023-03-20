
#include "pch.h"
#include <iostream>
#include <string>
#include <queue>

#include "Garage.h"
#include "Vehicle.h"


using namespace std;

int main()
{
	Garage* garage = new Garage();

	int numVehicles = rand() % 10;
	for (int i = 0; i < numVehicles; i++) {
		
		Vehicle* vehicle;
		garage->carQueue.push(vehicle);
		
	}

}


