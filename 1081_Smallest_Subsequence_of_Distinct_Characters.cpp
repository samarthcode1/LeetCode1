class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>f(26,0);
        for(int i=0;i<s.size();i++){
            f[s[i]-'a']++;
        }
        stack<char>st;
        vector<bool>seen(26,false);
        for(int i=0;i<s.size();i++){
            if(seen[s[i]-'a']){
                f[s[i]-'a']--;
                continue;
            }
            while(!st.empty() && st.top()>s[i] && f[st.top()-'a']>0){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
            f[s[i]-'a']--;
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};