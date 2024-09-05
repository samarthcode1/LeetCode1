class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int size=rolls.size()+n;
        int sum=0;
        for(auto i: rolls){
            sum+=i;
        }
        int total=mean*size;
        int rem=total-sum;
        if(rem>6*n || rem<n){
            return {};
        }
        int temp=rem/n;
        int maxi=rem%n;
        vector<int>v(n,temp);
        for(int i=0;i<maxi;i++){
            v[i]++;
        }
        return v;
    }
};