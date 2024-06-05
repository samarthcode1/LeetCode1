class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        vector<int> commonCount(26, INT_MAX);
        for (auto word : words) {
            vector<int> count(26, 0);
            for (char c : word) {
                count[c - 'a']++;
            }
            for(int i = 0; i < 26; ++i) {
                commonCount[i] = min(commonCount[i], count[i]);
            }
        }
    
        for (int i = 0; i < 26; ++i) {
            while (commonCount[i] > 0) {
                result.push_back(string(1, i + 'a'));
                commonCount[i]--;
            }
        }
        return result;
    }
};