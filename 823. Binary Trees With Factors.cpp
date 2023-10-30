class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mod = 1e9+7;
        unordered_map<int, int> um;
        um[arr[0]]=1;
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            int curr = arr[i];
            int val = 1;
            for(int j=0;j<i;j++)
            {
                if(curr%arr[j]==0)
                {
                    int temp = curr/arr[j];
                    if(temp>arr[j])
                    {
                        if(um.count(temp)>0)
                        {
                            long long r1 = um[arr[j]];
                            long long r2 = um[temp];
                            val=(val+(2*r1*r2)%mod)%mod;
                        }
                    }
                    else if(temp==arr[j])
                    {
                        long long req = um[temp];
                        val=(val+(req*req)%mod)%mod;
                        break;
                    }
                    else{break;}
                }
            }
            um[curr]=val;
        }   

        int result = 0;
        for(auto i: um){result=(result+i.second)%mod;}
        return result;
    }
};