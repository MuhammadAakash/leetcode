class ParkingSystem {
public:
    
    // Number of empty slots for each type of car
    vector<int> empty;

    ParkingSystem(int big, int medium, int small) {
        this->empty = vector<int>{big, medium, small};
    }

    bool addCar(int carType) {

        // If space is available, allocate and return True
        if (this->empty[carType - 1] > 0) {
            this->empty[carType - 1]--;
            return true;
        }

        // Else, return False
        return false;
    }
};