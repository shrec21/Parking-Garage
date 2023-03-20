#pragma once
#include <queue>
#include "Vehicle.h"
using namespace std;


class Garage
{

private:
	int noOfLots;
	queue<Vehicle*> carQueue;

public:
	Garage();
	~Garage();
};

