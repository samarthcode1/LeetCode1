class Solution {
public:
// 8,7,4,2,2,1
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int count=0;
        reverse(piles.begin(),piles.end());
        int l=n/3;
        cout<<l;
        int ind=1;
        for(int i=0;i<l;i++){
            count+=piles[ind];
            ind+=2;
        }
        return count;
    }
};