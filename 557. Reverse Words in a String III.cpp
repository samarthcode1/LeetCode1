class Solution {
public:
    string reverseWords(string s) {
        int l=0,h=0;
        while(h<s.size()){
            while(l<s.size() && s[l]!=' '){
                l++;
            }
            reverse(s.begin()+h,s.begin()+l);
            h=l+1;
            l=h;
        }
        return s;
    }
};