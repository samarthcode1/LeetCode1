class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long val = 0;
        int n = nums.size();
        vector<int> left(n), right(n);
        
        left[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], nums[i]);
        }

        right[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], nums[i]);
        }
        for (int j = 1; j <= n - 2; j++) {
            long long res = (long long)(left[j - 1] - nums[j]) * right[j + 1];
            val = max(val, res);
        }

        return val;
    }
};
