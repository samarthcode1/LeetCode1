class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
        for(int i=1;i<10;i++){
            int first=i;
            int second=i+1;
            while(first<=high && second<10){
                first=first*10+second;
                if(low<=first && first<=high){
                    v.push_back(first);
                }
                second++;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};