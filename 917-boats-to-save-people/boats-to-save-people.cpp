class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        // for(int i=0;i<people.size();i++){
        //     cout<<people[i]<<" ";
        // }
        int low,high;
        int count=0;
        for(low=0,high=people.size()-1;low<=high;high--){
            count++;
            if(people[low]+people[high]<=limit){
                low++;
            }
        }
        return count;
    }
};