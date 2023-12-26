/*

Link : https://leetcode.com/problems/decode-the-message/description/

You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows:

Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
Align the substitution table with the regular English alphabet.
Each letter in message is then substituted using the table.
Spaces ' ' are transformed to themselves.

*/

class Solution {
public:
    string decodeMessage(string key, string message) {

        // create mapping 
        char start='a';
        char mapping[290]={0};

        for(auto s:key){
            if(s!=' ' && mapping[s]==0){
                mapping[s]=start;
                start++;
            }
        }

        // use mapping
        string ans;
        for(int i=0;i<message.length();i++){
            char ch=message[i];
            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                char decoded=mapping[ch];
                ans.push_back(decoded);
            }
        }
        return ans;    
    }
};


