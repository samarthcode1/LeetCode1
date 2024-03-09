class Solution {
public:
int check(vector<int> &boards, int mid){
    int painter=1;
    long long total=0;
    for(int i=0;i<boards.size();i++){
        if(total+boards[i]<=mid){
            total+=boards[i];
        }
        else{
            painter++;
            total=boards[i];
        }
    }
    return painter;
}
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            if (check(nums, mid) <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};