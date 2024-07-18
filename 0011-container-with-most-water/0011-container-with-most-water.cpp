class Solution {
public:
    int maxArea(vector<int>& height) {
        // int max=INT_MIN;
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int diff=abs(j-i);
        //         int min;
        //         if(height[i]<height[j]){
        //             min=height[i];
        //         }
        //         else{
        //             min=height[j];
        //         }
        //         // cout<<min<<" ";
        //         int amount=min*diff;
        //         if(max<amount){
        //             max=amount;
        //         }
        //     }
        // }
        // return max;
        int maxi=INT_MIN;
        int i=0,j=height.size()-1;
            while(i<j){
                int diff=abs(j-i);
                int mini;
                mini=min(height[i],height[j]);
                // if(height[i]<height[j]){
                //     min=height[i];
                // }
                // else{
                //     min=height[j];
                // }
                // cout<<min<<" ";
                int amount=mini*diff;
                if(height[i]>height[j]){
                    j--;
                }
                else{
                    i++;
                }
                maxi=max(maxi,amount);
            }
        return maxi;
    }
};