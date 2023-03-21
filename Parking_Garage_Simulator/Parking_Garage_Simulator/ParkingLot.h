#include<vector>
#include"ParkingSlot.h"
#include "Ticket.h"
using namespace std;

class ParkingLot
{

private:
	int lotNo;
	int maxCapacity ;
	int currCapacity;
	

public:
	vector<ParkingSlot> slots;

	ParkingLot(int lotNo, int maxCapacity);
	int getLotNo();
	bool isLotFull();
	int getAvailableSlots() ;
	int getOccupiedSlots();
	bool parkVehicle(Vehicle* vehicle);
	bool removeVehicle(int slotNo);
	int findVehicleSlot(Vehicle* vehicle);
	int createTicket(Vehicle* vehicle);
	int checkTicket(int ticketNo);
	~ParkingLot();
};
