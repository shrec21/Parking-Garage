#pragma once
#include <queue>
#include "Vehicle.h"
using namespace std;


class Garage
{

private:
	int noOfLots;
	

public:
	queue<Vehicle*> carQueue;
	Garage();
	~Garage();
};

