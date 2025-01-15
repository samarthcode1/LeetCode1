class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int repeatedCount = 1;
        string repeatedA = a;

        // Keep repeating `a` until its length is at least `b.length()`
        while (repeatedA.length() < b.length()) {
            repeatedA += a;
            repeatedCount++;
        }

        // Check if `b` is now a substring of the repeated `a`
        if (repeatedA.find(b) != string::npos)
            return repeatedCount;

        // Check again after one more repetition
        repeatedA += a;
        if (repeatedA.find(b) != string::npos)
            return repeatedCount + 1;

        // If `b` is still not a substring, return -1
        return -1;
    }
};
