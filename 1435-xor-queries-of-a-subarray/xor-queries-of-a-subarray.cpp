class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> v(n);
        
        for (int i = 0; i < queries.size(); i++) {
            int f = queries[i][0];
            int s = queries[i][1];
            if (abs(f - s) == 1) {
                int temp = arr[f] ^ arr[s];
                v[i] = temp;
            }
            else if(abs(f-s)==0){
                v[i]=arr[f];
            }
            else{
                int val=arr[f];
                for(int j=f+1;j<=s;j++){
                    val=val^arr[j];
                }
                v[i]=val;
            }
        }
        return v;
    }
};