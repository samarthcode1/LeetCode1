class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int n=height.size();
        int ans=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.top()]<height[i]){
                int val=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
                int length=i-st.top()-1;
                ans+=(min(height[st.top()],height[i])-height[val])*length;
            }
            st.push(i);
        }
        return ans;
    }
};