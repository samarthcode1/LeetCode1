class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v;
        vector<int>v1;
        unordered_map<int,int>mp;
        for(auto i:arr2){
            mp[i]++;
        }
        
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    v.push_back(arr1[j]);
                }
            }
        }
        for(int i=0;i<arr1.size();i++){
            if(mp.find(arr1[i])==mp.end()){
                v1.push_back(arr1[i]);
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
        }
        return v;

    }
};