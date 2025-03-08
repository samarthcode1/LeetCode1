class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0, mini;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') count++;
        }
        mini = count;

        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'W') count--;
            if (blocks[i] == 'W') count++;
            mini = min(mini, count);
        }
        return mini;
    }
};
