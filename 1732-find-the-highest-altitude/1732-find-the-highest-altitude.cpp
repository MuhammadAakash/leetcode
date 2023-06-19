class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0;
        int highestAltitude = currentAltitude;
        
        for(int altitudeGain: gain) {
            currentAltitude += altitudeGain;
            highestAltitude = max(highestAltitude, currentAltitude);
        }
        return highestAltitude;
    }
};