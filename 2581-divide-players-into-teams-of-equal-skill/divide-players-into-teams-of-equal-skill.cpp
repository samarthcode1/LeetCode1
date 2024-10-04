class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long total=0;
        int n=skill.size();
        int team=skill[0]+skill[n-1];
        for(int i=0;i<n/2;i++){
            int curr=skill[i]+skill[n-i-1];
            if(curr!=team){
                return -1;
            }
            total+=(long long)skill[i]*(long long)skill[n-i-1];
        }
        return total;
    }
};