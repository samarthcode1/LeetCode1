class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        sort(s.rbegin(), s.rend());
        
        string result;
        int n = s.size();
        int count = 1;  // To track the consecutive appearance of a character
        
        // Vector to store the character and their count after processing
        vector<pair<char, int>> freq;
        
        // Count the frequency of each character
        for (int i = 0; i < n; i++) {
            if (i > 0 && s[i] == s[i - 1]) {
                count++;
            } else {
                if (i > 0) freq.push_back({s[i - 1], count});
                count = 1;
            }
        }
        // Push the last character count
        freq.push_back({s[n - 1], count});
        
        int idx = 0; // Pointer to track the position in freq vector
        while (idx < freq.size()) {
            auto [ch, cnt] = freq[idx];
            
            // Use the minimum of repeatLimit and available count
            int use = min(repeatLimit, cnt);
            result.append(use, ch);
            freq[idx].second -= use;  // Deduct the used count
            
            // If there are still characters left for the current character
            if (freq[idx].second > 0) {
                // Find the next available character
                int next = idx + 1;
                while (next < freq.size() && freq[next].second == 0) {
                    next++;
                }
                // If no other character is available, break
                if (next == freq.size()) break;
                
                // Add one occurrence of the next character to break the repeatLimit
                result += freq[next].first;
                freq[next].second--;
            } else {
                idx++;
            }
        }
        
        return result;

    }
};