/*

Q.225 : https://leetcode.com/problems/implement-stack-using-queues/description/
Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

*/

class MyStack {
public:
    queue<int>q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            int front=q.front();
            q.pop();
            q.push(front);
        }
    }
    
    int pop() {
        int top= q.front();
         q.pop();
         return top;

        
    }
    
    int top() {
        return  q.front();
        
    }
    
    bool empty() {
        return  q.empty();
    }
};

