class Solution {
public:
    vector<string> findAllRecipes(vector<string>& r, vector<vector<string>>& i,
                                  vector<string>& s) {
        unordered_set<string> st(s.begin(), s.end());
        queue<int> q;
        for (int idx = 0; idx < r.size(); idx++) {
            q.push(idx);
        }
        vector<string> ans;
        int prev = -1;
        while (static_cast<int>(st.size() )> prev) {
            prev = st.size();
            int n = q.size();
            while (n-- > 0) {
                int recipe = q.front();
                q.pop();
                bool check = true;
                for (auto& idx : i[recipe]) {
                    if (!st.count(idx)) {
                        check = false;
                        break;
                    }
                }
                if (!check) {
                    q.push(recipe);
                } else {
                    st.insert(r[recipe]);
                    ans.push_back(r[recipe]);
                }
            }
        }
        return ans;
    }
};