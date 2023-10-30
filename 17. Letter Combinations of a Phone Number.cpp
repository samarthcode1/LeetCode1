class Solution {
public:
    vector<string> letters = {"","", "abc", "def","ghi","jkl","mno","pqrs", "tuv", "wxyz"};
    vector<string> helper(string digits){
        if(digits.length() == 0){
            vector<string> ans;
            ans.push_back("");
            return ans;
        }
        vector<string> ans = helper(digits.substr(1));
        int size = ans.size();
        int number = digits[0] - '0';
        string possible = letters[number];
        int new_size = ans.size() * possible.length();

        vector<string> new_ans(new_size);
        for(int i = 0; i<size; i++){
            new_ans[i] = ans[i];
        }
        for(int i = size; i<new_size; i++){
            new_ans[i] = ans[i%size];
        }
        int index = 0;
        for(int i = 0; i<new_size; i++){
            if(i% size == 0 && i>0){
                index++;
            }
            new_ans[i] = possible[index] +  new_ans[i] ;
        }
        return new_ans;

    }

    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0){
            vector<string> a;
            return a;
        }
        vector<string> combi = helper(digits);
        return combi;
    }
};