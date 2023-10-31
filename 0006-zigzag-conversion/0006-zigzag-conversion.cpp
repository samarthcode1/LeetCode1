class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string s1;
        int n=s.size();
        for(int i=0;i<numRows;i++){
            if(i==0 || i==numRows-1){
                for(int j=i;j<n;j+=2*numRows-2){
                    s1.push_back(s[j]);
                }
            }
            else{
                int count=0;
                for(int j=i;j<n;){
                    s1.push_back(s[j]);
                    if(count%2==0){
                        j+=(2*(numRows-i)-2);
                        count++;
                    }
                    else{
                        j+=2*i;
                        count++;
                    }
                }

            }
        }
        return s1;

    }
};