class Solution {
public:
    int find(vector<int>& arr,int mid,int n){
        int sl=0;
        int ll=0;
        int sr=0;
        int lr=0;
        for(int i=0;i<mid;i++){
            if(arr[i]<arr[mid]){
                sl++;
            }
            if(arr[i]>arr[mid]){
                ll++;
            }
        }
        for(int i=mid+1;i<n;i++){
            if(arr[i]<arr[mid]){
                sr++;
            }
            if(arr[i]>arr[mid]){
                lr++;
            }
        }
        return (sl*lr)+(ll*sr);
    }
    int numTeams(vector<int>& rating) {
        // int n=rating.size();
        // int count=0;
        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(((rating[i]>rating[j]) && (rating[j]>rating[k])) ||
        //             ((rating[i]<rating[j]) && (rating[j]<rating[k]))){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;

        int n = rating.size();
        int count = 0;
        for (int i = 1; i < n - 1; i++) {
            count+=find(rating,i,n);
        }
        return count;
    }
};