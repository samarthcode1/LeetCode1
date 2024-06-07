class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // int maxArea=0;
        // for(int i=0;i<heights.size();i++){
        //     int minheight=INT_MAX;
        //     for(int j=i;j<heights.size();j++){
        //         minheight=min(minheight,heights[j]);
        //         maxArea=max(maxArea,minheight*(j-i+1));
        //     }
        // }
        // return maxArea;
        stack<int>st;
        int maxi=0;
        int n=heights.size();
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                int h=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }
                maxi=max(maxi,h*width);
            }
            st.push(i);
        }
        return maxi;

    }
};