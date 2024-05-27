class Solution {

    // int getFirstGreaterOrEqual(vector<int>& nums, int val) { return index; }

public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int N = nums.size();
        for (int i = 1; i <= N; i++) {
            int start = 0;
            int end = nums.size() - 1;

            int index = nums.size();
            while (start <= end) {
                int mid = (start + end) / 2;

                if (nums[mid] >= i) {
                    index = mid;
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            if (N - index == i) {
                return i;
            }
        }

        return -1;
    }
};