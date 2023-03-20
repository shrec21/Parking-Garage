#pragma once
#include <string>


using namespace std;

class Vehicle
{
private:
	int vehicleId;
	string type;
	int price;
	static int vid;
public:
	Vehicle();
	int getVehicleId() const;
	string getVehicleType() const;
    ~Vehicle();
};

