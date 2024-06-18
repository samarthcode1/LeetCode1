class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        vector<pair<int, int>> v;
        for (int i = 0; i < difficulty.size(); i++) {
            v.push_back({difficulty[i], profit[i]});
        }
        sort(worker.begin(), worker.end());
        sort(v.begin(), v.end());

        int netProfit = 0, maxProfit = 0, index = 0;
        for (int i = 0; i < worker.size(); i++) {
            while (index < difficulty.size() && worker[i] >= v[index].first) {
                maxProfit = max(maxProfit, v[index].second);
                index++;
            }
            netProfit += maxProfit;
        }
        return netProfit;
    }
};