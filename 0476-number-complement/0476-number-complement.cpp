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
        int ans = 0;
        long long power = 1;
        while (num > 0) {
            int last = num % 2;
            if (last == 0) {
                ans += power;
            }
            num = num / 2;
            power = power * 2;
        }
        return ans;
    }
};