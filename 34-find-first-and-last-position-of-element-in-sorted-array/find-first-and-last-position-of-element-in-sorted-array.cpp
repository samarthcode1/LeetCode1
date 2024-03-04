class Solution {
public:
    // vector<int>v;
    // void lower(vector<int>& nums, int target){
    //     int first = -1;

    //     for (int i = 0; i < nums.size(); ++i) {
    //         if (nums[i] == target) {
    //             first = i;
    //             break;
    //         }
    //     }
    //     if(first==-1){
    //         v.push_back(-1);
    //         // v.push_back(-1);
    //     }
    //     else{
    //         v.push_back(first);
    //     }
    // }
    // void higher(vector<int>& nums, int target){
    //     int end=-1;
    //     for (int i = nums.size() - 1; i >= 0; --i) {
    //         if (nums[i] == target) {
    //             end = i;
    //             break;
    //         }
    //     } 
    //     v.push_back(end);
    // }
    int lower(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}

int higher(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return last;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        // int first=-1,end=-1;
        // int i=0;
        // while(nums[i]!=target)
        int l=lower(nums,nums.size(),target);
        // if(v[0]==-1){

        // }
        int h=higher(nums,nums.size(),target);
        v.push_back(l);
        v.push_back(h);
        // return v;
        // int n= nums.size();
        // vector<int>v;
        // int start=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        // int end=lower_bound(nums.begin(),nums.end(),target+1)-nums.begin()-1;
        // if(start<n && nums[start]==target){
        //     v.push_back(start);
        //     v.push_back(end);
        // }
        // else{
        //     v.push_back(-1);
        //     v.push_back(-1);
        // }
        return v;
    }
};