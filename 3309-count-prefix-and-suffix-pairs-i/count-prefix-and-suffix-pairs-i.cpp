class Solution {
public:
    bool isPrefixAndSuffix(string s1,string s2){
        if(s2.size()<s1.size()){
            return false;
        }
        // cout<<s1<<" "<<s2<<endl;
        string temp=s2.substr(0,s1.size());
        cout<<temp<<" ";
        int n1=s2.size()-s1.size();
        string temp1=s2.substr(n1,s2.size());
        cout<<temp1<<" ";
        cout<<endl;
        if((temp==s1)&&(temp1==s1)){
            return true;
        }
        return false;
        
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(isPrefixAndSuffix(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};