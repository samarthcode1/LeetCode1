class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int front=0;
        int end=n-1;
        if(n==1){
            return n;
        }
        while(front<end){
            if(s[front]!=s[end]){
                break;
            }
            char c=s[front];
            int temp=front;
            while(temp<end && s[temp]==c){
                temp++;
            }
            front=max(front,temp-1);
            temp=end;
            while(front<temp && s[temp]==c){
                temp--;
            }
            end=min(end,temp+1);
            front++;
            end--;
        }
        return end-front+1;
    }
};