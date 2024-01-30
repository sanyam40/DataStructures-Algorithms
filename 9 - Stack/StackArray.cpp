#include <iostream>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }

    void push(int data){
        if(top==size-1) cout<<"Overflow";
        else{
        top++;
        arr[top]=data; 
        }
    }

    void pop(){
        if(top==-1) cout << "Underflow";
        else top--;
    }

    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }

    int getTop(){
        if(top==-1) cout << "Stack empty";
        else return arr[top];
    }

    int getsize(){
        return top+1;
    }

    void print(){
        cout <<"Top : "<<top<<endl;
        cout <<"Top element : "<<getTop()<<endl;
        cout <<"Stack : "; 
        for(int i=0;i<getsize();i++){
            cout<<arr[i]<<" ";
        }cout<<endl<<endl;
    }
};

int main(){
    Stack st(3);
    st.print();

    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    st.pop();
    st.pop();
    st.print();

    cout << st.getTop();
}