class Solution {
public:
    vector<bool> sieveOfEratosthenes(int n) {
        vector<bool> prime(n + 1, true);
        prime[0] = false;
        prime[1] = false;
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        return prime;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime = sieveOfEratosthenes(right);
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (isPrime[i])
                ans.push_back(i);
        }
        if(ans.size()<2){
            return {-1,-1};
        }
        int mini=INT_MAX;
        int idx=-1;
        vector<int>v;
        for(int i=0;i<ans.size()-1;i++){
            int diff=ans[i+1]-ans[i];
            if(diff<mini){
                mini=diff;
                idx=i;
            }
        }
        return {ans[idx],ans[idx+1]};
    }
};