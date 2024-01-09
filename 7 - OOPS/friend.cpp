/*

friend is a keyword in C++ that is used to share the information of a class that was previously declared as private to another class or function.
For Example :
the private members of a class are hidden from every other class and can't
be modified except through getters and setters.Similarly, the protected members are hidden from all classes others that its children classes.
*/

#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public :
    A(int _val){
        a = _val;
    }  

    int getA()const{
        return a;
    }

    void setA(int _val){
        a = _val;
    }  

    friend class B;
    friend void showA(const A &a);
};

class B{
    public:
    void showA(const A &a){
        // cout<<a.getA()<<endl;
        cout<<a.a<<endl; // we can access private member of class A via friend class B.
    }
};

int main(){

}