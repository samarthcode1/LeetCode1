class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>v;
        stack<int>st;
        int i=0;
        for(auto value:target){
            while(i<value-1){
                v.push_back("Push");
                v.push_back("Pop");
                i++;
            }
            v.push_back("Push");
            i++;
        }
        return v;
    }
};