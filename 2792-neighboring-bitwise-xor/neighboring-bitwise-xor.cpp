class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int XOR=0;
        for(auto i:derived){
            XOR^=i;
        }
        return XOR==0;
    }
};