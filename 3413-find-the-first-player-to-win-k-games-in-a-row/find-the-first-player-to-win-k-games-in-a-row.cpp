class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        // int n=skills.size();
        // vector<int>v;
        // for(int i=1;i<n;i++){
        //     v.push_back(i);
        // }
        // int temp=0,ele=0;
        // while(true){
        //     int num=v.front();
        //     v.erase(v.begin());
        //     if(skills[num]<skills[ele]){
        //         temp++;
        //         v.push_back(num);
        //     }
        //     else{
        //         temp=1;
        //         v.push_back(ele);
        //         ele=num;
        //     }
        //     if(temp==k || temp>=n-1){
        //         return ele;
        //     }
        // }
        // return 1;
        int n=skills.size();
        deque<int>v;
        for(int i=1;i<n;i++){
            v.push_back(i);
        }
        int temp=0,ele=0;
        while(true){
            int num=v.front();
            v.pop_front();
            if(skills[num]<skills[ele]){
                temp++;
                v.push_back(num);
            }
            else{
                temp=1;
                v.push_back(ele);
                ele=num;
            }
            if(temp==k || temp>=n-1){
                return ele;
            }
        }
        return 1;
    }
};