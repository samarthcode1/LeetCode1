class Solution {
public:
    static int countBits(int num){
        int count=0;
        while(num>0){
            count++;
            num &= num-1;
        }
        return count;
    }
    static bool cmp(int a,int b){
        int countBita=countBits(a);
        int countBitb=countBits(b);
        if(countBita==countBitb){
            return a<b;
        }
        return countBita<countBitb;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>v;
        sort(arr.begin(),arr.end(),cmp);
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]%2==0){
        //         v.push_back(arr[i]);
        //     }
        //     else if((arr[i]+1)%2==0)
        // }
        return arr;
    }
};