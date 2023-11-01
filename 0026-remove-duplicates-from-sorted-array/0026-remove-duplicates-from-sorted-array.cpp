class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s1;
        for(int i=0;i<nums.size();i++){
            s1.insert(nums[i]);
        }
        int size=s1.size();
        nums.clear();
        for(auto i:s1){
            nums.push_back(i);
        }
        return size;
        
    }
};