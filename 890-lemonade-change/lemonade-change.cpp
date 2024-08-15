class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0, ten = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                f++;
                // cout << "Five:" << f << endl;
            } else if (bills[i] == 10) {
                ten++;
                if (f <= 0) {
                    return false;
                }
                f--;
                // cout << "Five:" << f << "Ten:" << ten << endl;
            } else {
                if(f >= 1 && ten >= 1) {
                    f--;
                    ten--;
                }
                else if(f>=3){
                    f=f-3;
                }
                else{
                    return false;
                }
                // cout << "Five:" << f << "Ten:" << ten << endl;
            }
        }
        return true;
    }
};