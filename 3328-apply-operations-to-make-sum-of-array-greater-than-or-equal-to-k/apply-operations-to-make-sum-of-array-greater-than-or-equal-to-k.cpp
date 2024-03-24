class Solution {
public:
    bool ischeck(int x,int k)
    {
        long long sum=0;
        for(int i=0;i<=x;i++){
            long long left=x-i+1;
            sum++;
            if(sum*left>=k){
                return true;
            }
        }
        return false;
    }
    int minOperations(int k) {
        // vector<int> nums;
        // nums.push_back(1);
        // int totalOps = 0;
        // int currentSum = 1;
        // while (currentSum < k) {
        //     if (currentSum * 2 <= k) {
        //         nums.push_back(currentSum);
        //         currentSum *= 2;
        //     } 
        //     else {
        //         int diff = k - currentSum;
        //         int quotient = diff / nums.back();
        //         int remainder = diff % nums.back();
        //         totalOps += quotient;
        //         if (remainder == 0)
        //             return totalOps;
        //         else {
        //             nums.back() += remainder;
        //             currentSum += remainder;
        //         }
        //     }
        // }
        // return totalOps;
        // vector<int> nums;
        // v.nums.push_back(1);
        // int totalOps = 0;
        // int currentSum = 1;
        // while (currentSum < k) {
        //     nums.push_back(nums.back()); 
        //     currentSum += nums.back(); 
        //     totalOps++;
        // }
        // return totalOps;
        
        int low = 0;
        int high = k;
        int total = -1;
        int sum=1;
        if(sum>=k){
            return 0;
        }    
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (ischeck(mid,k)) {
                total=mid;
                high=mid-1;
            } 
            else {
                low=mid+1;
            }
        }
        return total;
        }
        
};