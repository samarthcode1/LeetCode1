class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size(); 
        vector<int> diff(n + 1, 0);
        for (auto& i : shifts) {
            if (i[2] == 1) {  
                diff[i[0]]++;
                if (i[1] + 1 < n) {
                    diff[i[1] + 1]--;
                }
            } else { 
                diff[i[0]]--;
                if (i[1] + 1 < n) {
                    diff[i[1] + 1]++;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            count = (count + diff[i]) % 26;  
            if (count < 0) count += 26;    
            s[i] = 'a' + (s[i] - 'a' + count) % 26;
        }

        return s;
    }
};
