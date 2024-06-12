class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        for(auto i:nums){
            if(i==0){
                v1.push_back(i);
            }
            else if(i==1){
                v2.push_back(i);
            }
            else{
                v3.push_back(i);
            }
        }
        for(auto i:v2){
            v1.push_back(i);
        }
        for(auto i:v3){
            v1.push_back(i);
        }
        nums.clear();
        nums={v1.begin(),v1.end()};
    }
};