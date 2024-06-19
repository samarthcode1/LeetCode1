class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
    vector<int> bloomDay1 = bloomDay;
    sort(bloomDay1.begin(), bloomDay1.end());
    int n = bloomDay.size();
    int start = bloomDay1[0];
    int end = bloomDay1[n - 1];
    int res = INT_MAX;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int count = 0;
        int roses = 0;

        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                roses++;
            }

            if (roses == k) {
                count++;
                roses = 0;
            }

            if (bloomDay[i] > mid) {
                roses = 0;
            }
        }

        if (count >= m) {
            res = std::min(res, mid);
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (res ==INT_MAX ) {
        return -1;
    }

    return res;
}
};