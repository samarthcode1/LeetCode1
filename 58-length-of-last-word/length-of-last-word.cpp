class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char>st;
        int i=0;
        while(i<s.size()){
            st.push(s[i]);
            i++;
        }
        int ans=0;
        while(st.top()==' '){
            st.pop();
        }
        while(st.top()!=' ' && !st.empty()){
            st.pop();
            ans++;
            if(st.empty()){
                break;
            }
        }
        return ans;
    }
};