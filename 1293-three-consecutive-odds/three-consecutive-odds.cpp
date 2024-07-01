class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int curr,prev,prev2;    
        for(int i=2;i<n;i++){
            curr=arr[i];
            cout<<curr<<endl;
            int temp=i;
            prev=arr[--temp];
            cout<<curr<<endl;
            int temp2=temp;
            prev2=arr[--temp2];
            cout<<curr<<endl;
            if(curr%2==1 && prev%2==1 && prev2%2==1){
                return true;
            }
        }
        return false;
    }
};