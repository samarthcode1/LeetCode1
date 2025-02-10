class Solution {
public:
    string clearDigits(string s) {
        string str;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                if(str.size()>=1){
                    str.pop_back();
                }
                
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};