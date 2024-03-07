class Solution {
public:
    int check(vector<int>& weights, int mid){
        int day=1;
        int w=0;
        for(int i=0;i<weights.size();i++){
            if(w+weights[i]>mid){
                day++;
                w=weights[i];
            }
            else{
                w+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(check(weights,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};