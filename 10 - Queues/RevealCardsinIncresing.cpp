/*

Q.950 : https://leetcode.com/problems/reveal-cards-in-increasing-order/description/

You are given an integer array deck. There is a deck of cards where every card has a unique integer. The integer on the ith card is deck[i].
You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck.
You will do the following steps repeatedly until all cards are revealed:

Take the top card of the deck, reveal it, and take it out of the deck.
If there are still cards in the deck then put the next top card of the deck at the bottom of the deck.
If there are still unrevealed cards, go back to step 1. Otherwise, stop.
Return an ordering of the deck that would reveal the cards in increasing order.

Note that the first entry in the answer is considered to be the top of the deck.

*/

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        queue<int>q;
        vector<int>ans(deck.size());

        // put indexes of ans in queue
        for(int i=0;i<ans.size();i++){
            q.push(i);
        }

        //reverse simulation 
        for(int i=0;i<deck.size();i++){
            // reveal
            ans[q.front()]=deck[i];
            q.pop();

            // push front to bottom
            if(!q.empty()){
                auto f=q.front();
                q.pop();
                q.push(f);
            }
        }
        return ans;
        
    }
};