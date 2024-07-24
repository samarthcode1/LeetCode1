class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> v;
        
        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            int n = 0;
            
            for (char c : s) {
                n = n * 10;
                n+=mapping[c - '0'];
            }
            
            v.push_back({n, i});
        }     
        sort(v.begin(), v.end());
        for(auto i:v){
            cout<<i.first<<" "<<i.second<<endl;
        }
        vector<int>vec;
        for(auto i:v){
            vec.push_back(nums[i.second]);
        }
        return vec;
    }
};
