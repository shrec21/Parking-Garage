#include "Vehicle.h"


class Ticket
{
private:
	int ticketNo;
	Vehicle *parkedVehicle;
	ParkingSlot *parkedSlot;
	ParkingLot* parkedLot;
	int vehicleId;
	int lotNo;
	int slotNo;
	time_t inTime;
	time_t exitTime;
	int price;

public:
	Ticket();

	int getTicketNo();
	//void setTicketNo(int slotNo);
	
	Vehicle* getParkedVehicle();
	void setParkedVehicle(Vehicle *parkedVehicle);

	ParkingSlot *getParkedSlot();
	void setParkedSlot(ParkingSlot *parkedSlot);

	ParkingLot *getParkedLot();
	void setParkedLot(ParkingLot *parkedLot);

	int getVehicleId();
	void setVehicleId(int vehicleId);

	int getSlotNo();
	void setSlotNo(int slotNo);

	int getLotNo();
	void setLotNo(int lotNo);

	/* tbd
	int getInTime();
	void setInTime(time_t inTime);

	int getExitTime();
	void setExitTime(time_t exitTime);
	*/
	~Ticket();
};
