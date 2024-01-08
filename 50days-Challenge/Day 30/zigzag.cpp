/*

Link : https://leetcode.com/problems/zigzag-conversion/

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:
string convert(string s, int numRows);

*/

class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1) return s;

        vector<string>zigzag(numRows);

        int i=0;
        int row=0;
        bool direction=1; // 1->Top to bottom

        while(true){
            if(direction){
                while(row<numRows && i<s.size()){
                    zigzag[row++].push_back(s[i++]);
                }
                row=numRows-2;
            }
            else{
                while(row>=0 && i<s.size()){
                    zigzag[row--].push_back(s[i++]);
                }
                row=1;   
            }
            if(i>=s.size()) break;
            direction=!direction;
        }

        string ans="";
        for(int i=0;i<zigzag.size();i++){
            ans+=zigzag[i];
        }
        return ans;
    }
};