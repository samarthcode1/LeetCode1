class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // vector<int>v;
        stack<int>st;
        st.push(0);
        for(int i=1;i<prices.size();i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                prices[st.top()]-=prices[i];
                st.pop();
            }
            st.push(i);
        }
        return prices;
    }
};