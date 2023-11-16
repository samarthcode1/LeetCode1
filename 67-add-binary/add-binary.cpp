class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.length();
        int blen=b.length();
        string s="";
        int carry=0;
        int length = max(alen,blen);
        while(a.length()<length){
            a="0"+a;
        }
        while(b.length()<length){
            b="0"+b;
        }
        for(int i=length-1;i>=0;i--){
            if(a[i]=='1' && b[i]=='1'){
                if(carry==0){
                    s="0"+s;
                }
                else{
                    s="1"+s;
                }
                carry=1;
            }
            else if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')){
                if(carry==0){
                    s="1"+s;
                }
                else{
                    s="0"+s;
                    carry=1;
                }
            }
            else if(a[i]=='0' && b[i]=='0'){
                if(carry==0){
                    s="0"+s;
                }
                else{
                    s="1"+s;
                }
                    carry=0;

            }
        }
        if(carry==1){
            s="1"+s;
        }
        return s;   
    }
};