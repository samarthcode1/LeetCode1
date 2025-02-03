class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> v(200, -1);
        int maxi = 0, left = -1;
        for (int i = 0; i < n; i++) {
            if (v[s[i]] > left) {
                left = v[s[i]];
            }
            v[s[i]]=i;
            maxi=max(maxi,i-left);

        }
        return maxi;
    }
};