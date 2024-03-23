class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        // vector<int> a(200,-1);
        // // memset(a,-1,sizeof(a));
        int subsLength=0,start=-1;
        // for(int i=0;i<n;i++){
        //     if(a[s[i]]>start){
        //         start=a[s[i]];
        //     }
        //     a[s[i]]=i;
        //     subsLength=max(subsLength,i-start);
        // }
        
        int j=0;
        unordered_set<char>set;
        for(int i=0;i<n;i++){
            if(set.count(s[i])==0){
                set.insert(s[i]);
                subsLength=max(subsLength,i-j+1);
            }
            else{
                while(set.count(s[i])){
                    set.erase(s[j]);
                    j++;
                }
                set.insert(s[i]);
            }
        }
        return subsLength;

    }
};