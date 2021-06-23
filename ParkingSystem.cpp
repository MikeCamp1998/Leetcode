class ParkingSystem {
public:
    
    unordered_map<int,int> carsCount;
    
    ParkingSystem(int big, int medium, int small) {
        carsCount[1] = big;
        carsCount[2] = medium;
        carsCount[3] = small;
    }
    
    bool addCar(int carType) {
        
        if (carsCount[carType] > 0) {
            carsCount[carType]--;
            return true;
        } else {
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

//Other cool way to do it

class ParkingSystem {
public: vector<int> vehicle;
public:
    ParkingSystem(int big, int medium, int small) {
        vehicle = {big,medium,small};
    }
    bool addCar(int carType) {
        if(vehicle[carType-1]) {
            vehicle[carType-1]-=1
            return true
		}
		return false
	}
};