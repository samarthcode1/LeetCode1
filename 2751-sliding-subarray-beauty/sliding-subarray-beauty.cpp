class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        
        vector<int> mp(51);

        int i=0,j=0;
        while(j<n){
            if(nums[j]<0){
                int ele = nums[j]+50;
                mp[ele]+=1;
            }

            if(j-i+1>=k){
                int temp=0;
                bool ok=false;
                for(int k1=0;k1<50;++k1){
                    if(mp[k1]>0){
                        if(temp+mp[k1] >= x){
                            ans.push_back(k1-50);
                            ok= true;
                            break;
                        }else{
                            temp += mp[k1];
                        }
                    }
                }
                if(!ok){
                    ans.push_back(0);
                }

                if(nums[i] < 0){
                    mp[nums[i]+50] -=1;
                }
                i+=1;
            }
            j+=1;
        }
        return ans;
    }
};