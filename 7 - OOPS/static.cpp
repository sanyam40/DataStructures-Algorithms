/*

Static Data Member :
That variable is going to share memory with all of the class instances.

Static Member Function :
There is no instance of that class being passes into that Method.

*/

#include <iostream>
using namespace std;

class Box{
    public :
    int x,y;

    static int count;

    Box(int x, int y){
        this->x = x;
        this->y = y;
    }

};

int Box::count = 0; // a common memory for all the instances of the class

int main(){

    Box b1(10,20);
    Box b2(30,40);

    cout << b1.x << " " << b1.y << endl;
    cout << b2.x << " " << b2.y << endl;

    // b1.count = 10;
    cout<<b2.count<<endl;

    return 0;
}