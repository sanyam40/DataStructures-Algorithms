/*

Q.232 : https://leetcode.com/problems/implement-queue-using-stacks/description/

Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

*/

class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int pop=-1;
        if(!s2.empty()){
            pop=s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            pop=s2.top();   
        }
        s2.pop();
        return pop;
    }
    
    int peek() {
        int front=-1;
        if(!s2.empty()){
            front=s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            front=s2.top();
        }
       return front;
    }
    
    bool empty() {
        return s2.empty() && s1.empty();
    }
};
