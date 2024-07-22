class Solution {
public:
    int find(vector<int>& nums, int k) {
        int left = 0;
        int count = 0;
        int ans = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i] % 2;
            while (sum > k) {
                sum -= nums[left] % 2;
                left++;
            }
            count += i - left + 1;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return find(nums,k)-find(nums,k-1);
    }
};