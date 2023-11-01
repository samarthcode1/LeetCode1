class Solution {
public:
    void paren(int left,int right,string &s,vector<string> &res){
        if(left==0 && right==0){
            res.push_back(s);
        }
        if(left>right || left<0 || right<0){
            return;
        }
        s.push_back('(');
        paren(left-1,right,s,res);
        s.pop_back();
        s.push_back(')');
        paren(left,right-1,s,res);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string s;
        int left=n;
        int right=n;
        paren(left,right,s,res);
        return res;

    }
};