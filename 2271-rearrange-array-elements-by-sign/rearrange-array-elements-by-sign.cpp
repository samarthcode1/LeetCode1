class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,v3;
	    for(int i=0;i<nums.size();i++){
	        if(nums[i]>=0){
	           v1.push_back(nums[i]); 
	        }
	        else{
	            v2.push_back(nums[i]);
	        }
	    }
	   // for(int i=0;i<v1.size();i++){
	   //     cout<<v1[i]<<" ";
	   //}
	   //cout<<endl;
	   //for(int i=0;i<v2.size();i++){
	   //     cout<<v2[i]<<" ";
	   //}
	   //cout<<endl;
	  	for(int i=0;i<v1.size() && i<v2.size();i++){
					v3.push_back(v1[i]);
					v3.push_back(v2[i]);
			}
			return v3;

    }
};