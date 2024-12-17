class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        sort(s.rbegin(), s.rend());

        string result;
        int n = s.size();
        int count = 1;
        vector<pair<char, int>> freq;

        for (int i = 0; i < n; i++) {
            if (i > 0 && s[i] == s[i - 1]) {
                count++;
            } else {
                if (i > 0)
                    freq.push_back({s[i - 1], count});
                count = 1;
            }
        }
        freq.push_back({s[n - 1], count});

        int idx = 0;
        while (idx < freq.size()) {
            auto [ch, cnt] = freq[idx];

            int use = min(repeatLimit, cnt);
            result.append(use, ch);
            freq[idx].second -= use;
            if (freq[idx].second > 0) {
                int next = idx + 1;
                while (next < freq.size() && freq[next].second == 0) {
                    next++;
                }
                if (next == freq.size())
                    break;
                result += freq[next].first;
                freq[next].second--;
            } else {
                idx++;
            }
        }

        return result;
    }
};