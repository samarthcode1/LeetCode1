class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // //1 2 3 2 3 7 
        // int count=0;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]<=nums[i-1]){
        //         count+=nums[i-1]-nums[i]+1;
        //         cout<<count<<" ";
        //         nums[i]=nums[i-1]+1;
        //         cout<<nums[i];
        //     }
        //     cout<<endl;

        // }
        // return count;
        int n = nums.size();
        int max_val = 0;
        int minIncrements = 0;
        for (int val : nums) {
            max_val = max(max_val, val);
        }
        vector<int> frequencyCount(n + max_val + 1, 0);
        for (int val : nums) {
            frequencyCount[val]++;
        }
        for (int i = 0; i < frequencyCount.size(); i++) {
            if (frequencyCount[i] <= 1) continue;
            int duplicates = frequencyCount[i] - 1;
            frequencyCount[i + 1] += duplicates;
            frequencyCount[i] = 1;
            minIncrements += duplicates;
        }

        return minIncrements;
        


    }
};