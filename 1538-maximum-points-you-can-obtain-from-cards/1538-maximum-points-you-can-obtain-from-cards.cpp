class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int sum=0;
        int right=c.size()-1;
        for(int i=0;i<k;i++){
            sum+=c[i];
        }
        int maxi=0;
        maxi=max(maxi,sum);
        for(int i=k-1;i>=0;i--){
            sum-=c[i];
            sum+=c[right];
            maxi=max(maxi,sum);
            right--;
        }
        return maxi;
    }
};