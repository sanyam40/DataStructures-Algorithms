/*

Shallow Copy Means Copying the address of the pointer variable to the new pointer variable.
Deep Copy Means Copying the value of the pointer variable to the new pointer variable.

*/

#include <iostream>
using namespace std;

class Abc{
    public:
    int x;
    int *y;

    Abc(int x, int y){
        this->x = x;
        this->y = new int(y);
    }

    /* default copy constructor
       In in this pointers of both objects will became same if we change one it will effect another */

    // Abc(const Abc &obj){
    //     x = obj.x;
    //     y = obj.y; /* This do Shallow Copy */
    // }

    /* Output 
       10 0x5654418a2eb0
       10 0x5654418a2eb0 */ 


    // Deep Copy

     Abc(const Abc &obj){
        x = obj.x;
        y = new int(*(obj.y)); // It will create new memory location for y
    } 

    /* Output :
    10 0x55d9dae4deb0
    10 0x55d9dae4ded0
    */

    void display(){
        cout << x << " " << y << endl;
    }

    ~Abc(){
        delete y;
    }
};

int main(){

  Abc a(10, 20);

  Abc b = a; 
  a.display();
  b.display();
}