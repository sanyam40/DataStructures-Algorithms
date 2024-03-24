/*

Q.933 : https://leetcode.com/problems/number-of-recent-calls/description/

You have a RecentCounter class which counts the number of recent requests within a certain time frame.
Implement the RecentCounter class:

RecentCounter() Initializes the counter with zero recent requests.
int ping(int t) Adds a new request at time t, where t represents some time in milliseconds, and returns the number of requests that has happened in the past 3000 milliseconds (including the new request). Specifically, return the number of requests that have happened in the inclusive range [t - 3000, t].
It is guaranteed that every call to ping uses a strictly larger value of t than the previous call.

*/

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        // 1. push into q
        q.push(t);

        // 2. pop invalid req.older, older than t-3000
        while(!q.empty() && q.front()<(t-3000)){
            q.pop();
        }

        // 3.now queue has only number of recents call
        return q.size();
        
    }
};
