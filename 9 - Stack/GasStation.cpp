/*

Q.134 : https://leetcode.com/problems/gas-station/description/

There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].
You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.
Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique

Example 1:

Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3

*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit=0;
        int balance=0;

        int start=0;

        // har ek index ko check kar raha h ans h ya nhi
        for(int i=0;i<gas.size();i++){
            balance=balance+gas[i]-cost[i];

            if(balance<0){
                deficit+=abs(balance);
                start=i+1;
                balance=0;
            }
        }

        if(balance-deficit>=0){
            return start;
        }
        else{
            return -1;
        }
        
    }
};