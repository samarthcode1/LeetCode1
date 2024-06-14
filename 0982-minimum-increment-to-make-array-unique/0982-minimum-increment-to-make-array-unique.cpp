class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //1 2 3 2 3 7 
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                count+=nums[i-1]-nums[i]+1;
                cout<<count<<" ";
                nums[i]=nums[i-1]+1;
                cout<<nums[i];
            }
            cout<<endl;

        }
        return count;
        


    }
};