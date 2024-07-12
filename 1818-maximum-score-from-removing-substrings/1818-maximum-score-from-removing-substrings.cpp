class Solution {
public:
    int removes(string& s,string str,int p){
        int sum=0;
        int idx=0;
        for(int i=0;i<s.size();i++){
            s[idx++]=s[i];
            if(idx>=2 && s[idx-2]==str[0] && s[idx-1]==str[1]){
                idx-=2;
                sum+=p;
            }
        }
        s.erase(s.begin()+idx,s.end());
        return sum;
    }
    int maximumGain(string s, int x, int y) {
        int sum = 0;
        if (x > y) {
            sum+=removes(s,"ab",x);
            sum+=removes(s,"ba",y);
        }
        else{
            sum+=removes(s,"ba",y);
            sum+=removes(s,"ab",x);
        }
        return sum;
        //     int a = 0, b = 0;
        //     for (int i = 0; i < n; i++) {
        //         if (s[i] == 'b') {
        //             if (s[i + 1] == 'b' || s[i + 1] == 'a' || a > 0) {
        //                 b++;
        //             } 
        //             else if(a>0 && s[i+1]!='a')
        //             else {
        //                 b = 0;
        //             }
        //         } else if (s[i] == 'a') {
        //             if (b > 0) {
        //                 b--;
        //                 sum += y;
        //             } else {
        //                 a++;
        //             }
        //         }
        //     }
        //     if (a > 0 && b > 0) {
        //         sum += min(a, b) * x;
        //     }
        // } else {
        //     int a = 0, b = 0;
        //     for (int i = 0; i < n; i++) {
        //         if (s[i] == 'a') {
        //             if (s[i + 1] == 'b' || s[i + 1] == 'a' || b > 0) {
        //                 a++;
        //             } else {
        //                 a = 0;
        //             }
        //         } else if (s[i] == 'b') {
        //             if (a > 0) {
        //                 a--;
        //                 sum += x;
        //             } else {
        //                 b++;
        //             }
        //         }
        //     }
        //     if (a > 0 && b > 0) {
        //         sum += min(a, b) * y;
        //     }
        // }

        return sum;
    }
};