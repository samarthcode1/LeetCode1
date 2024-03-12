class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int i=0;
        string str="";
        while(i<s.size()){
            char ch = s[i];
            if(ch =='('){
                if(st.size()>0)
                str += ch;
                st.push(ch);
            }
            else{
                if(st.size()>1){
                    str +=')';
                }
                st.pop();
            }
          

            i++;
        }
        return str;

    }
};