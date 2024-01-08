#include <iostream>
using namespace std;

/* 4 Pillars Of OOPS */

/* Abstraction is the only Pillar which is implemented by other 3 Pillars. */

/*
1. Encapsulation - Binding data and functions together.
                      It is way of implementing abstraction.

why encapsulation?
    1. Security ( Protect Integerity of data )
    2. Code Reusability ( Easy to Handle )
    3. Maintainability

Perfect Encapsulation -
    1. All Data Members should be private
    2. Data can be accessed only through public functions

Encapsulation is often mean to achieve abstraction.By Hiding internal details and showing only functionality.

--------------------------------------------------------------------------------------------------------------------------------------------

2. Inheritance - is a way of getting features/attributes from parent/super/base class.
syntax :
class derived_class_name : visibility_mode base_class_name{
    // body of derived class
};

Example :
class A{
    public:
        int a;
    private:
        int b;
    protected:
        int c;
};

class B : public A{
    // a will be public
    // b will not be accessible
    // c will be protected
};

It will increase code extensibility and reusability.

-> Difference between Private & Protected.
Protected members are accessible in within class & derived class but not in main function.
Private members are accessible only within class.

Types of Inheritance :
1. Single Inheritance -
    class B : public A{
        // body of class B
    };

2. Multiple Inheritance - (IMP) Java doesn't support multiple inheritance.
    class B : public A1, public A2{
        // body of class B
    };

Diamond Problem - is a problem which occurs in multiple inheritance when we have same function in both base classes.
soln : 1) scope resolution operator
Example : p.Teacher::display();
          p.Student::display();
       2) virtual base class - in this case only one copy of data member will be present in derived class.
Example : class Teacher : virtual public person{}

3. hierarchical Inheritance -
    class B : public A{
        // body of class B
    };
    class C : public A{
        // body of class C
    };

4. Chain Inheritance

--------------------------------------------------------------------------------------------------------------------------------------------

3. Polymorphism - is a way of performing single action in different ways or same function with different arguments.
    1. Compile Time/Static Polymorphism - Function Overloading & Operator Overloading
    2. Run Time Polymorphism - Function Overriding

Example : operator overloading
    class Complex{
        private:
            int real, imag;
        public:
            Complex(int r = 0, int i = 0){
                real = r;
                imag = i;
            }
            Complex operator + (Complex const &obj){
                Complex res;
                res.real = real + obj.real;
                res.imag = imag + obj.imag;
                return res;
            }
    };

    int main(){
        Complex c1(10, 5), c2(2, 4);
        Complex c3 = c1 + c2;
    }
*/
int main()
{
}