class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int temp = x;
        while(temp>0)
        {
            int d = temp%10;
            rev = rev*10+d;
            temp /= 10;
        }
        if(rev == x)
        {
            return true;
        }
        return false;
    }
};
