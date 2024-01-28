class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        char temp=tolower(s[0]);
        for(int i=1;i<s.size();i++){
            if(temp!=tolower(s[i])){
                count++;
            }
            temp=tolower(s[i]);

        }
        return count;
    }
};