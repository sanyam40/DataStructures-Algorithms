/*

Link : https://leetcode.com/problems/integer-to-roman/description/

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

*/

class Solution {
public:
    string intToRoman(int num) {

        string romanSymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        string ans="";

        for(int i=0;i<13;i++){
            while(num>=values[i]){
                ans+=romanSymbols[i];
                num-=values[i];
            }
        }
        return ans;
    }
};