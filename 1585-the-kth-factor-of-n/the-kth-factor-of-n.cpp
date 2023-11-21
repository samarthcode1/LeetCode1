class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> mp;
        int ans;
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                mp.push_back(i);
            }
        }
        if(k > mp.size()) {
            ans = -1;
        } else {
            ans = mp[k - 1];
        }
        return ans;
    }
};