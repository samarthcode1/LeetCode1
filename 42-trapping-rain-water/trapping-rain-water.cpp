class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int ans=0;
        int n=height.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.top()]<height[i]){
                int top=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
                int length=i-st.top()-1;
                ans+=(min(height[i],height[st.top()])-height[top])*length;
            }
            st.push(i);
        }
        return ans;
    }
};