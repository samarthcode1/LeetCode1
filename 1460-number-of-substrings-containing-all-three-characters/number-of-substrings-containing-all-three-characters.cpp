class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v={-1,-1,-1};
        int count=0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=i;
            if(v[0]!=-1 && v[1]!=-1 && v[2]!=-1){
                count+=1+*min_element(v.begin(),v.end());
            }
        }
        return count;
    }
};