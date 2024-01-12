class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1="";
        string s2="";
        int n=s.size();
        int n1=n/2;
        s1=s.substr(0,n1);
        s2=s.substr(n1,n);
        int count1=0;
        int count2=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='a'||s1[i]== 'e'|| s1[i]=='i'|| s1[i]=='o'|| s1[i]=='u'|| s1[i]=='A'|| s1[i]=='E' || s1[i]=='I'|| s1[i]=='O'|| s1[i]=='U'){
                count1++;
            }
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='a'||s2[i]== 'e'|| s2[i]=='i'|| s2[i]=='o'|| s2[i]=='u'|| s2[i]=='A'|| s2[i]=='E' || s2[i]=='I'|| s2[i]=='O'|| s2[i]=='U'){
                count2++;
            }
        }
        // cout<<s1<<" "<<s2;
        // cout<<count1<<" "<<count2;
        return count1==count2;
    }
};