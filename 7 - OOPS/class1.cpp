/* why to use OOPS ?
   bcoz function based program is not easy to extend , maintainace issue,diffucult to implement. */

#include <iostream>
using namespace std;

/* Class is a blueprint or ( custom data type ) */

/* Access Modifiers 
   1) Public 2) Private 3) Protected */

class Student{ // by Default class is private
private : 
    string a;

public :
    int id;
    int age;
    string name; // string is also a class

    /* If we don't define any constructor then compiler will define a default constructor for us. 
       Constructor doesn't have any return type and it is public.
       It defines the value the value when object is created it can be garbage value */
       
    Student(){ // Default constructor
        cout << "Constructor called" << endl;
    }

    /* Parameterized Constructor */
    Student(string name,int age,int id){
        cout << "Parameterized Constructor called" << endl;
        this->name=name;
        this->age=age;
        this->id=id;
        /* this is a keyword which is a pointer which points to the current object. */
    }

    Student(string _name){
        cout << "Parameterized Constructor with name only called" << endl;
        name=_name; 
        /* _is used to differentiate between the name of class and name of parameter. */
    }

    void print(){
        cout << this->name << endl;
        cout << this->age << endl;
        cout << this->id << endl;
    }
}; 

class empty{};

int main()
{

    cout << sizeof(empty) << endl;   // even the empty class will occupy space as 1byte
    cout << sizeof(Student) << endl; // in this it will consider all the space occupied by members.

    /* Padding is done to make the size of the class as multiple of 4 bytes.
       to increase the speed of the program as the processor will read the data in 4 bytes even if the data is of 1 bytes.
       sabse bade data type ke hisab se padding hoti hai. */

    /* Abstraction : is hiding the implementation details from the user.
       so that user can only use the functionality without knowing the implementation details. */

    Student s1; // Object is an instance of class
    s1.name="sanyam";
    s1.print();

    Student s2("sanyam",20,1);
    s2.print();

    Student s3("sanyam");
    s3.print();

    /* Polymorphism : same name different work/forms.
       As which constructor to call is decided as per the arguments passed.
       This is known as Polymorphism. as same name different work of function. */

    Student *s4=new Student("sanyam",20,1); 
    s4->print();
    cout<<(*s4).name<<endl;

    /* new is used to allocate memory in heap. 
       It will return the address of the memory allocated. */   

    /* -> is used to access the members of the class using pointer in heap.
       while in stack we use . operator to access the members of the class. */

    delete s4;   
    
    return 0;
}