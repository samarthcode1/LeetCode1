// class Solution {
// public:
//     int smallestDistancePair(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
        // int diff;
        // vector<int>v;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         diff=abs(nums[j]-nums[i]);
        //         v.push_back(diff);
        //     }
        // }
        // sort(v.begin(),v.end());
        // for(auto i:v){
        //     cout<<i<<" ";
        // }
        // return v[k-1];

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int arraySize = nums.size();
        int maxElement = *max_element(nums.begin(), nums.end());
        vector<int> distanceBucket(maxElement + 1, 0);
        for (int i = 0; i < arraySize; ++i) {
            for (int j = i + 1; j < arraySize; ++j) {
                int distance = abs(nums[i] - nums[j]);
                ++distanceBucket[distance];
            }
        }
        for (int dist = 0; dist <= maxElement; ++dist) {
            k -= distanceBucket[dist];
            if (k <= 0) {
                return dist;
            }
        }
        return -1; 
    }
};