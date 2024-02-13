class Solution {
public:
    bool check(string s){
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string s="";
        for(int i=0;i<words.size();i++){
            if(check(words[i])){
                s+=words[i];
                break;
            }
        }
        return s;;

    }
};