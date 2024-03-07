class Solution {
public:
 int findMax(vector<int>& piles)
        {
            int maxi = 0;
            for(int i=0;i<piles.size();i++)
            {
                if(piles[i]>maxi)
                {
                    maxi=piles[i];
                }
            }
            return maxi;
        }

long long calculateTotalHours(vector<int> &piles, int hourly)
{
        long long totalHour=0;
        for(int i=0;i<piles.size();i++)
        {
            totalHour =totalHour + ceil((double)piles[i]/(double)hourly);
        }
        return totalHour;
}
int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low=1,high = findMax(piles);
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long totalHours=calculateTotalHours(piles,mid);
            if(totalHours<=h)
            {
                high = mid - 1;
            }
            else
                {
                    low = mid + 1;
                }
        }
          return low;
    }
  
};

// class Solution {
// public:
// int total_hour(vector<int> &v, int hourly) {
//     int totalH = 0;
//     int n = v.size();
//     for (int i = 0; i < n; i++) {
//         totalH += ceil((double)(v[i]) / (double)(hourly));
//     }
//     return totalH;
// }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int maxi=*max_element(piles.begin(),piles.end());
//         int low=0;
//         int high=maxi;
//         while(low<=high){
//             int mid=(low+high)/2;
//             int time=total_hour(piles,mid);
//             if(time<=h){
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return low;
//         // for (int i = 1; i <= maxi; i++) {
//         //     long long reqTime = calculateTotalHours(piles, i);
//         //     if (reqTime <= h) {
//         //         return i;
//         //     }
//         // }
//         // return maxi;

//     }
// };