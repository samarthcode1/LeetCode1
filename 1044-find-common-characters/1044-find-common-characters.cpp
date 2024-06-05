class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        vector<int> common(26, INT_MAX);
        for (auto word : words) {
            vector<int> v(26, 0);
            for (char c : word) {
                v[c - 'a']++;
            }
            for(int i = 0; i < 26; ++i) {
                common[i] = min(common[i], v[i]);
            }
        }
        for(int i = 0; i < 26; ++i)
        {
            string s="";
            while (common[i] > 0) 
            {
                s+=(i+'a');
                result.push_back(s);
                common[i]--;
                s="";
            }
        }
        return result;
    }
};