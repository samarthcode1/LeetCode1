class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for (int i = 0; i < n;) {
            char ch = chars[i];
            int count = 0;
            while (i < n && chars[i] == ch) {
                i++;
                count++;
            }
            chars[idx++] = ch;
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[idx++] = c;
                }
            }
        }

        return idx; 
    }
};

