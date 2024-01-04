class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int num : nums) {
            counter[num]++;
        }
        int ans = 0;
        for (auto i: counter) {
            if (i.second == 1) {
                return -1;
            }
            ans += ceil((double)(i.second) / 3);
        }
        return ans;
    }
};