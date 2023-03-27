#pragma once
#include <string>


using namespace std;

class Vehicle
{
private:
	int vehicleId;
	string type;
	int price;
	int slotPosition;
	static int vid;
public:
	Vehicle();
	int getPrice();
	
	int getVehicleId() const;
	string getVehicleType() const;
	int getSlotPosition();
    ~Vehicle();
};

