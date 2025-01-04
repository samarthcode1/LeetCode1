class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>st;
        for(auto c:s){
            st.insert(c);
        }
        int ans=0;
        for(char c:st){
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
            unordered_set<char>final;
            for(int k=i+1;k<j;k++){
                final.insert(s[k]);
            }
            ans+=final.size();
        }
        return ans;

    }
};