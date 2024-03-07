class Solution {
public:
    int check(vector<int>& bloomDay, int mid,int m, int k){
        int count=0,total=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            }
            else{
                total+=count/k;
                count=0;
            }
        }
        total+=count/k;
        return total;
        
    }
    int minDays(vector<int>& bloomDay, long long  m, long long k) {
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int low=mini;
        int high=maxi;
        long long n=bloomDay.size();
        if(n<m*k){
            return -1;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int total=check(bloomDay,mid,m,k);
            if(total>=m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};