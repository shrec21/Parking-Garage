#include "Vehicle.h"

class ParkingSlot
{
private:
    int slotNo;
	bool isOccupied;
	Vehicle *parkedVehicle;
	time_t inTime;
	time_t exitTime;
public:
	ParkingSlot(int slotNo);

	int getSlotNo();

	bool getIsOccupied();
	void setIsOccupied(bool isOccupied);

	Vehicle* getVehicle();
	void setVehicle(Vehicle* parkedVehicle);

	time_t getInTime();
	void setInTime(time_t inTime);

	time_t getExitTime();
	void setExitTime(time_t exitTime);

	~ParkingSlot();
};
