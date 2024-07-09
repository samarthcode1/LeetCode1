class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double count;
        int next = 0;
        long long wait = 0;
        for (int i = 0; i < n; i++) {
            next = max(customers[i][0], next) + customers[i][1];
            wait += next - customers[i][0];
        }
        count = static_cast<double>(wait) / n;
        return count;
    }
};