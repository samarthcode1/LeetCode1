class Solution {
public:
    bool check(vector<int>& position, int mid,int m){
        int ind=1,last=position[0];
        for(int i=1;i<position.size();i++){
            if((position[i]-last)>=mid){
                
                if(++ind==m){
                    return true;
                }
                last=position[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        long long force=0,mid;
        long long low=1;
        long long high=*max_element(position.begin(),position.end());
        while(high>=low){
            mid=(high+low)/2;
            if(check(position,mid,m)){
                low=mid+1;
                force=mid;
            }
            else{
                high=mid-1;

            }
        }
        return force;

    }
};