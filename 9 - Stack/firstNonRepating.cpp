#include <iostream>
#include <queue>
using namespace std;

// --> Important question
// Q. first non-repating character in a stream
// queue is used bcoz left to right mai jaana h 

int main(){
    string str="facfdcad";
    queue<char> q;
    int freq[26]={0};

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        freq[ch-'a']++;
        q.push(ch);

        // answer find
        while(!q.empty()){
            char frontCharacter=q.front();
            if(freq[frontCharacter-'a']>1){
                q.pop(); // this is not the ans
            }
            else{
                // ==1 wala case -> this is the ans
                cout << frontCharacter << "->";
                break;
            }
        }

        if(q.empty()){
            cout<<"#"<<"->";
        }
    }
}