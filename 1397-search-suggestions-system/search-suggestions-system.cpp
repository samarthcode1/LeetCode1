class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>str;
        sort(products.begin(),products.end());
        int n=products.size();
        int l=0,r=n-1;
        for(int i=0;i<searchWord.size();i++){
            char c=searchWord[i];
            while(l<=r && (products[l][i]!=c)){
                l++;
            }
            while(l<=r && (products[r][i]!=c)){
                r--;
            }
            str.push_back({});
            for(int j=0;j<3 && (l+j)<=r;j++){
                str.back().push_back(products[l+j]);
            }
        }
        return str;
    }
};