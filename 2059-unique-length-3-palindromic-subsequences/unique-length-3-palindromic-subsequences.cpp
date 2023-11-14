class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>set;
        for(char c:s){
            set.insert(c);
        }
        int ans=0;
        for(char c:set){
            int i=-1;
            int j=0;
            for(int k=0;k<s.size();k++){
                if(s[k]==c){
                    if(i==-1){
                        i=k;
                    }
                    j=k;
                }
            }
            unordered_set<char>s1;
            for(int k=i+1;k<j;k++){
                s1.insert(s[k]);
            }
            ans+=s1.size();
            
        }
        return ans;
    }

};