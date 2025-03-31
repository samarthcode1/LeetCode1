class Solution {
public:
    bool check(vector<int>& time, int totalTrips, long long mid) {
        long long count = 0;
        for (int i = 0; i < time.size(); i++) {
            count += mid / time[i];
            if (count >= totalTrips) {
                return true;
            }
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = *min_element(time.begin(), time.end());
        long long high = (long long)*max_element(time.begin(), time.end()) *
                         (long long)totalTrips;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (check(time, totalTrips, mid) == true) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};