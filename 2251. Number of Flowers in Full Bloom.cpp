static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>v(people.begin(),people.end());
        sort(v.begin(),v.end());
        sort(flowers.begin(),flowers.end());
        unordered_map<int,int>mp;
        priority_queue<int, vector<int>, greater<int>> pq;
        int i=0;
        for(auto x:v){
            while(i<flowers.size() && flowers[i][0]<=x){
                pq.push(flowers[i][1]);
                i++;
            }
            while(!pq.empty() && pq.top()<x){
                pq.pop();
            }
            mp[x]=pq.size();
        }
        vector<int>res;
        for(auto i:people){
            res.push_back(mp[i]);
        }
        return res;

    }
};