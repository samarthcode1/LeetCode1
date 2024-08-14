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

        // Find the maximum element in the array
        int maxElement = *max_element(nums.begin(), nums.end());

        // Initialize a bucket array to store counts of each distance
        vector<int> distanceBucket(maxElement + 1, 0);

        // Populate the bucket array with counts of each distance
        for (int i = 0; i < arraySize; ++i) {
            for (int j = i + 1; j < arraySize; ++j) {
                // Compute the distance between nums[i] and nums[j]
                int distance = abs(nums[i] - nums[j]);

                // Increment the count for this distance in the bucket
                ++distanceBucket[distance];
            }
        }

        // Find the k-th smallest distance
        for (int dist = 0; dist <= maxElement; ++dist) {
            // Reduce k by the number of pairs with the current distance
            k -= distanceBucket[dist];

            // If k is less than or equal to 0, return the current distance
            if (k <= 0) {
                return dist;
            }
        }
        return -1;  // Return -1 if no distance found, should not reach here
    }
};