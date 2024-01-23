class Solution {
public:
    int func(vector<string>& arr,int index,string s){
        unordered_set<char>st(s.begin(),s.end());
        // cout<<"S is: "<<s<<" "<<"index: "<<index<<"\n";
        
        if(st.size() != s.length()){
            return -1;
        }
        if(index == arr.size())
        {
            return s.length();
            // return 0;
        }
        // int n=s.size();
        int n = func(arr, index+1, s);
        int m = func(arr, index+1, s+arr[index]);
        // for(int i=index;i<arr.size();i++){
        //     // string str = 
        //     n=max(n,func(arr,i+1,s+arr[i]));
        // }
        return max(n,m);
    }   
    int maxLength(vector<string>& arr) {
        // int n=arr.size();
        // if(n==1){
        //     return n;
        // }
        string s="";
        return func(arr,0,s);
        
    }
};