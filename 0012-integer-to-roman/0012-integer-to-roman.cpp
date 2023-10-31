class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hund[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thoud[]={"","M","MM","MMM"};
        // string s=thoud[(num/1000)-1]+hund[((num%1000)/100)-1]+tens[((num%1000)%100)/10-1]+ones[num%10];
        string s=thoud[(num/1000)]+hund[((num%1000)/100)]+tens[((num%1000)%100)/10]+ones[num%10];

        return s;


    }
};