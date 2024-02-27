/*

Link : https://leetcode.com/problems/reorganize-string/description/

Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.
Return any possible rearrangement of s or return "" if not possible.

Example 1:

Input: s = "aab"
Output: "aba"

*/

class Solution {
public:
    string reorganizeString(string s) {
        // T.C: O(n)

        int hash[26]={0};

        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }

        // find the most frequent 
        char most_freq;
        int max=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>max){
                max=hash[i];
                most_freq=i+'a';
            }
        }

        int index=0;
        while(max>0 && index<s.size()){
            s[index]=most_freq;
            max--;
            index+=2;
        }
        
        if(max!=0){
            return "";
        }

        hash[most_freq-'a']=0;

        // place rest of char
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index=index>=s.size()?1:index;
                s[index]=i+'a';
                hash[i]--;
                index+=2;
            }
        }
        return s;
    }
};