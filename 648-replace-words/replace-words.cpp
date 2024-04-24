class Solution {
public:
    string check(vector<string>& dictionary ,string word){
        int mini=INT_MAX;
        string temp="";
        for(int i=0;i<dictionary.size();i++){
            if(word.substr(0,dictionary[i].size())==dictionary[i]){
                if(mini>dictionary[i].size()){
                    mini=dictionary[i].size();
                    temp=dictionary[i];
                }
            }
        }
        return temp;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        string res="";
        string word="";
        int start=0;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                string ans=check(dictionary,word);
                if(ans==""){
                    res+=word;
                }
                else{
                    res+=ans;
                }
                word="";
                start=i+1;
                res+=" ";
            }
            else {
                word+=sentence[i];
            }
        }
        string ans=check(dictionary,sentence.substr(start));
        if(ans==""){
            res+=sentence.substr(start);
        }
        else{
            res+=ans;
        }
        return res;

    }
};