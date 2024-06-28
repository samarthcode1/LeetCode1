class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        // unordered_map<long long,long long>mp;
        vector<long long>v(n,0);
        for(vector<int> i:roads){
            v[i[0]]++;
            v[i[1]]++;
            // mp[i[0]]++;
            // mp[i[1]]++;
        }
        sort(v.begin(),v.end());
        // for(auto i:vec){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        long long sum=0;
        long val=1;
        for(auto i:v){
            sum+=val*i;
            val++;
        }
        return sum;
    }
};