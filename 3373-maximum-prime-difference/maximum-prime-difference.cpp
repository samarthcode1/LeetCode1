class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        int front=-1;
        int end=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(find(v.begin(),v.end(),nums[i])!=v.end()){
                front=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(find(v.begin(),v.end(),nums[i])!=v.end()){
                end=i;
                break;
            }
        }
        return abs(front-end);
    }
};