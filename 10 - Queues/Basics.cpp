#include <iostream>
#include <queue>
using namespace std;

int main(){
    // using STL 
    queue<int>q ;

    q.push(5);
    cout << "Queue Size " << q.size() << endl;

    q.pop();
    cout << "Queue Size " << q.size() << endl;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front Element : "<<q.front() <<endl;
    cout << "Rearer Element : "<<q.back() <<endl;
}