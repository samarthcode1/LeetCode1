class Solution {
public:
    int maxVowels(string s, int k) {
        int j=0;
        int count=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            cout<<i-j+1<<endl;
            if(i-j+1<=k){
                if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'){
                    count++;
                }
            }
            else{
                if(s[j]== 'a' || s[j]== 'e' || s[j]== 'i' || s[j]== 'o' || s[j]== 'u'){
                    count--;
                }
                if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'){
                    count++;
                }
                j++;
            }
            ans=max(ans,count);
        }
        return ans;

    }
};