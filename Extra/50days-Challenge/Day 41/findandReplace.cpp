/*

Link : https://leetcode.com/problems/find-and-replace-pattern/description/

Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

Example 1:

Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.

*/

class Solution {
public:

    void createMapping(string& str){
        // find mapping
        char start='a';
        char mapping[300]={0};

        for(auto ch:str){
            if(mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }
        // update the string
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            str[i]=mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        // dono words,pattern ki mapping create karke compare karenge
        vector<string>ans;
        createMapping(pattern);

        for(string s:words){
            string temp=s;
            createMapping(temp);

            if(temp==pattern){
                // valid is there
                ans.push_back(s);
            }
        }
        return ans;
    }
};