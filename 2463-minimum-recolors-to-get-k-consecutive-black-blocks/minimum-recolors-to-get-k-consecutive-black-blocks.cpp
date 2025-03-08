class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini=k;
        for (int i = 0; i < blocks.size()-k+1; i++) {
            int count = 0;
            int left = i, right = i + k;
            while (left<right){
                if(blocks[left]=='W'){
                    count++;
                }
                // cout<<count<<endl;
                left++;
            }
            // cout<<endl;
            mini=min(mini,count);
        }
        return mini;
    }
};