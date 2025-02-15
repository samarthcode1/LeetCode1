class Solution {
public:
    bool check(string s,int target){
        if(s=="" && target==0){
            return true;
        }
        for(int i=0;i<s.size();i++){
            string left=s.substr(0,i+1);
            string right=s.substr(i+1);
            int leftNum=stoi(left);
            if(check(right,target-leftNum))
            {
                return true;
            }
        }
        return false;
    }
    int punishmentNumber(int n) {
        int num=0;
        for(int i=1;i<=n;i++){
            int sqt=i*i;
            if(check(to_string(sqt),i)){
                num+=sqt;
            }
        }
        return num;
    }
};