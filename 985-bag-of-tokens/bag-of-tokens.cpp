class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int front=0;
        int end=tokens.size()-1;
        int max_score=0;
        while(front<=end){
            if(tokens[front]<=power){
                score++;
                power-=tokens[front];
                front++;
            }
            else{
                if(score>0){
                    score--;
                    power+=tokens[end];
                    end--;
                }
                else{
                    break;
                }
            }
            max_score=max(max_score,score);
        }
        return max_score;
    }
};