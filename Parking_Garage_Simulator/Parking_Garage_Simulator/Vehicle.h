#pragma once
#include <string>
static int vid = 101;

using namespace std;

class Vehicle
{
private:
	int vehicleId;
	string type;
public:
	Vehicle();
	Vehicle(int vehicleId, string type) ;
	int getVehicleId() const;
	string getVehicleType() const;
    ~Vehicle();
};

