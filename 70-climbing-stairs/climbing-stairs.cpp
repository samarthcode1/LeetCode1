class Solution {
public:
    int climbStairs(int n) {
        int step2= 0, step1= 1, cur = 0;
        for (int i = 0; i < n; i++) {
            cur = step2 + step1;
            step2 = step1;
            step1 = cur;
        }
        return cur;
    }
};