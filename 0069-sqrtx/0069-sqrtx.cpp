class Solution {
public:
    int binarySearch(int x) {
        int start = 0;
        int end = x;
        long long int mid = start + (end - start)/2;
        long long int ans = -1;
        while(start <= end) {
            long long int square = mid * mid;
            if(square == x) {
                return mid;
            }
            else if(square > x) {
                end = mid -1;
            }
            else if(square < x) {
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};