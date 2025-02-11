class Solution {
public:
    bool check(stack<char>st,string part,int n1){
        // stack<char>st=temp;
        for(int i=n1-1;i>=0;i--){
            if(st.top()!=part[i]){
                return false;
            }
            st.pop();
        }
        return true;
    }
    string removeOccurrences(string s, string part) {
        // int n1=part.size();
        // stack<char>st;
        // for(int i=0;i<s.size();i++){
        //     st.push(s[i]);
        //     if(st.size()>=n1 && check(st,part,n1)){
        //         for(int j=0;j<n1;j++){
        //             st.pop();
        //         }
        //     }
        // }
        // string s1="";
        // while(!st.empty()){
        //     s1=st.top()+s1;
        //     st.pop();
        // }
        // // reverse(s.begin(),s.end());
        // return s1;
        while(s.length()>0 && s.length()>s.find(part)){
           s.erase(s.find(part),part.length());
        }
        return s;
    }
};