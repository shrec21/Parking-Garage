#include "Vehicle.h"
#include "ParkingSlot.h"
#include "ParkingLot.h"
class Ticket
{
private:
	Vehicle *parkedVehicle;
	ParkingSlot *parkedSlot;
	ParkingLot *parkedLot;
	int vehicleId;
	int lotNo;
	int slotNo;
	time_t inTime;
	time_t exitTime;
	int price;

public:
	Ticket();
	
	Vehicle* getParkedVehicle();
	void setParkedVehicle(Vehicle *parkedVehicle);

	ParkingSlot *getParkedSlot();
	void setParkedSlot(ParkingSlot *parkedSlot);

	ParkingSlot *getParkedLot();
	void setParkedLot(ParkingLot *parkedLot);

	int getVehicleId();
	void setVehicleId(int vehicleId);

	int getSlotNo();
	void setSlotNo(int slotNo);

	int getLotNo();
	void setLotNo(int lotNo);

	~Ticket();
};
