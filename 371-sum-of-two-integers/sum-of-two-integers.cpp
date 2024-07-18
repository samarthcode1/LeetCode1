class Solution {
public:
    vector<int>to_binary(int a){
        vector<int>v;
        // int i=0;
        while(a>0){
            v.push_back(a%2);
            a=a/2;
            // i++;
        }
        reverse(v.begin(),v.end());
        return v;
    }
    int getSum(int a, int b) {
        // vector<int>ab=to_binary(a);
        // vector<int>bb=to_binary(b);
        // for(auto i:ab){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i:bb){
        //     cout<<i<<" ";
        // }
        // for(int i=0;i)
        while(b!=0){
            int carry=a&b;
            a=a^b;
            b=carry<<1;
        }

        return a; 
    }
};