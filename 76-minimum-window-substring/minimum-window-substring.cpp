class Solution {
public:
    string minWindow(string s, string t) {
        // int arr[126]={0};
        // for(int i=0;i<t.size();i++){
        //     int index=t[i]-'A';
        //     arr[index]++;
        // }
        // int st=0;
        // int end=0;
        // int myarr[126]={0};
        // string ans="";
        // while(st<s.size() && end<s.size()){
        //     while(end-st+1 <= t.size() && end<s.size()){
        //         myarr[int(s[end]-'A')]++;
        //         end++;
        //     }
        //     int count=0;
        //     for(int i=0;i<126;i++){
        //         if(arr[i]>0 && myarr[i]>=arr[i]){
        //             count+=arr[i];
        //         }
        //         if(count==t.size()){
        //             string str="";
        //             str=s.substr(st,end);
        //             if( str.size() <= ans.size() && ans!=""){
        //                 ans=str;
        //             }
        //             else if(ans==""){
        //                 ans=str;
        //             }
        //             //break;
        //         }
        //     }
        //     if(count<t.size() && end<s.size()){
        //         myarr[int(s[end]-'A')]++;
        //         end++;
        //     }
        //     else if (count==t.size() && st<s.size()){
        //         while(count==t.size() && st<end){
        //             if(arr[s[st]-'A']>0 && myarr[ s[st]-'A']==arr[ s[st]-'A']){
        //                 string mystr="";
        //                 count--;
        //                 mystr=s.substr(st,end);
        //                 if( mystr.size() < ans.size() && ans!=""){
        //                     ans=mystr;
        //                 }
        //                 //break;
        //             }
        //             myarr[ s[st]-'A']--;
        //             st++;
        //         }
        //     }
        // }
        // return ans;
        vector<int> arr(128, 0);
        for (char c : t) {
            arr[c]++;
        }
    
    // Frequency array for characters in current window in 's'
        vector<int> myarr(128, 0);
    
        int start = 0, end = 0, minLen = INT_MAX, minStart = 0, count = 0;
    
        while (end < s.size()) {
        // Expand the window by adding characters to the end
            if (arr[s[end]] > 0) {
                myarr[s[end]]++;
                if (myarr[s[end]] <= arr[s[end]]) {
                    count++;
                }
            }
            end++;
        
        // If current window contains all characters of 't'
            while (count == t.size()) {
            // Update minimum window if found smaller
                if (end - start < minLen) {
                    minLen = end - start;
                    minStart = start;
                }
            
            // Shrink the window from the start
                if (arr[s[start]] > 0) {
                    myarr[s[start]]--;
                    if (myarr[s[start]] < arr[s[start]]) {
                        count--;
                    }
                }
                start++;
            }
        }
    
        // Return the minimum window substring
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
