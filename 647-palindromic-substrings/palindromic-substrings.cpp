class Solution {
public:
    int expand(string &s, int left, int right, int &slen){
        int count = 0;
        while(left>=0 && right<slen){
            if(s[left]!= s[right]){
                break;
            }
            count++;
            left--;
            right++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int slen = s.length();
        int count = 0;
        for(int i = 0; i<slen; i++){
            count+= expand(s, i, i,slen);
            count+= expand(s, i, i+1,slen);
        }
        return count;
    }
};