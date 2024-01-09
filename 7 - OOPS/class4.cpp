#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){ // virtual is used to skip it at run time and go to the derived class
        cout << "Animal Sound" << endl;
    }

    virtual ~Animal(){
        cout << "Animal Destructor" << endl;
    }
};

class Dog:public Animal{
    public:
    void sound() override{
        cout << "Dog Sound" << endl;
    }

    ~Dog(){
        cout << "Dog Destructor" << endl;
    }
};

class Cat:public Animal{
    public:
    void sound() override{
        cout << "Cat Sound" << endl;
    }

    ~Cat(){
        cout << "Cat Destructor" << endl;
    }
};

void sound(Animal *animal){
    animal->sound(); // Run time polymorphism -> Dynamic binding, Late binding
}


int main(){
    Animal *animal=new Dog(); // Compile time polymorphism -> Static binding, Early binding
    // bcoz Dog() is created at run time but animal is created at compile time
    sound(animal);
    animal=new Cat();
    sound(animal);

    delete animal;
    return 0;
}