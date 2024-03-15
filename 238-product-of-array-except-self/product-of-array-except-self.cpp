class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>vl(n);
        vector<int>vr(n);
        vector<int>product(n);
        vl[0]=1;
        for(int i=1;i<n;i++)
        {
            vl[i]=vl[i-1]*nums[i-1];
        }
        // for(auto i:vl){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        vr[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            vr[i]=vr[i+1]*nums[i+1];
        }
        // for(auto i:vr){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            product[i]=vl[i]*vr[i];
        }
        return product;
    }
};