// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         map<int, int>m;
//         for(int n1=0; n1<nums2.size(); n1++){
//             m[nums2[n1]]++;
//         }
//         set<int>v;
//         for(int n1=0; n1<nums1.size(); n1++){
//             if(m.find(nums1[n1])!=m.end()){
//                 v.insert(nums1[n1]);
//             }
//         }
//         vector<int>v;
//         for(auto pointer: v){
//             v.push_back(pointer);
//         }
//         return v;
//     }
// };
// class Solution {
// public:
//    string addStrings(string num1, string num2) {
//         int sum=0,n1=num1.length()-1,n2=num2.length()-1;
//         string v="";
//         while(n1>=0||n2>=0||sum>0){
//             if(n1>=0){
//                 sum+=num1[n1]-'0';
//                 n1--;
//             }
//             if(n2>=0){
//                 sum+=num2[n2]-'0';
//                 n2--;
//             }
            
//              v += char(sum % 10 + '0');
//             sum =sum/ 10;
//         }
//         reverse(v.begin(),v.end());
//         return v;

//     }
// };


// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n1=nums1.size();
//         int n2=nums2.size();
//         vector<int> v;
//         for(int i=0;i<n1;i++)
//         {
//             auto pointer = find(nums2.begin(),nums2.end(),nums1[i]);

//             int idx = pointer - nums2.begin(); 
//             int random = -1;

//            for(int j = idx+1; j<n2;j++)
//            {
//                if(nums2[j] > nums2[idx])
//                {
//                    random = nums2[j];
//                    break;
//                }
              
//            }
//             v.push_back(random);
//         }
//         return v;
//     }
// };


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>v;
        int row_size=matrix.size();
        int column_size =matrix[0].size();
        int spiral_length =0;
        int matrix_size =row_size*column_size;
        int first_row=0;
        int first_column=0;
        int las_row=row_size-1;
        int last_column=column_size-1;
        
        while(spiral_length<matrix_size)
        {
            for(int i=first_column;spiral_length<matrix_size && i<=last_column; i++)
            {
                v.push_back(matrix[first_row][i]);
                spiral_length++;
            }
            first_row++;
            
            for(int i=first_row;spiral_length<matrix_size && i<=las_row; i++)
            {
                v.push_back(matrix[i][last_column]);
                spiral_length++;
            }
            last_column--;
            
            for(int i=last_column;spiral_length<matrix_size && i>=first_column; i--)
            {
                v.push_back(matrix[las_row][i]);
                spiral_length++;
            }
            las_row--;
            
            for(int i=las_row;spiral_length<matrix_size && i>=first_row; i--)
            {
                v.push_back(matrix[i][first_column]);
                spiral_length++;
            }
            first_column++;
        }
        return v;
    }
};