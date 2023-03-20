#include<vector>
#include"ParkingSlot.h"
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
	bool isLotFull();
	int getAvailableSlots() ;
	int getOccupiedSlots();
	~ParkingLot();
};
