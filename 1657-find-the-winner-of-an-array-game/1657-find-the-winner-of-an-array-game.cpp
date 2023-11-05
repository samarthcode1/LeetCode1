// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k) {
//         int count=0;
//         // if(k>=arr.size()){
//         //     return *max_element(arr.begin(),arr.end());
//         // }
//         int present=arr[0];
//         for(int i=1;i<arr.size();i++){
//             int second=arr[i];
//             if(present>second){
//                 count++;
//             }
//             else{
//                 present=second;
//                 count=1;
//             }
//             if(count==k || present==*max_element(arr.begin(),arr.end())){
//                 return present;
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxElement = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            maxElement = max(maxElement, arr[i]);
        }
        
        int curr = arr[0];
        int winstreak = 0;
        
        for (int i = 1; i < arr.size(); i++) {
            int opponent = arr[i];
            
            if (curr > opponent) {
                winstreak++;
            } else {
                curr = opponent;
                winstreak = 1;
            }
            
            if (winstreak == k || curr == maxElement) {
                return curr;
            }
        }
        
        return -1;
    }
};