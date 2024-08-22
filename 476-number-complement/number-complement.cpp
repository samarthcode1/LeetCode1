// class Solution {
// public:
//     string tobinary(int n) {
//         string binaryString = "";
//         while (n > 0) {
//             binaryString = to_string(n % 2) + binaryString;
//             n /= 2;
//         }
//         return binaryString;
//     }

//     int binaryToDecimal(int num) {
//         int temp = num;
//         int position = 0;
//         int result = 0;
//         while (temp > 0) {
//             int rightMostBit = temp % 10;
//             result += rightMostBit * pow(2, position);
//             position++;
//             temp = temp / 10;
//         }
//         return result;
//     }
//     int findComplement(int num) {
//         string binary = tobinary(num);
//         // cout << binary;
//         for (int i = 0; i < binary.size(); i++) {
//             if (binary[i] == '1') {
//                 binary[i] = '0';
//             } else if (binary[i] == '0') {
//                 binary[i] = '1';
//             }
//         }
//         int var = stoi(binary);
//         return binaryToDecimal(var);
//     }
// };
class Solution {
public:
    int findComplement(int num) {
        int i = 0, ans = 0;
        while (num) {
            cout<<"Num: "<<num<<endl;
            int temp = num & 1;
            cout<<"Temp: "<<temp<<endl;
            if (!temp)
                ans += pow(2, i);
            cout<<"Ans: "<<ans<<endl;
            num = num >> 1;
            i++;
        }
        return ans;
    }
};