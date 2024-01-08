#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int *a;

    Student(){
        cout<<"Default constructor called"<<endl;
    }    

    Student(string name,int age,int a){
        this->name = name;
        this->age = age;
        this->a = new int(a);
    }

    /* Copy constructor is called when we create a new object from an existing object. 
       It is not necessary to add this constructor as it will be generated automatically.
       and it will do shallow copy instead of deep copy.
       It is used while using Deep Copy. */
    Student(const Student &s){
        cout<<"Copy constructor called"<<endl;
        this->name = s.name;
        this->age = s.age;
    }

    void print(){
        cout<<name<<" "<<age<<endl;
    }

    /* Getter and Setter */
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }

    /* Lifecycle of an Object - Constructor and Destructor. 
       If we dont make destructor then it will be generated automatically.
       Destructor is called when the object is destroyed At the end of the program or scope. */
    ~Student(){
        delete a;
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    Student s1("sanyam",20,9);
    Student s2=s1;
    Student s3(s1);

    s1.print();
    s2.print();

    cout<<(s2.getName())<<endl;

    return 0;
}