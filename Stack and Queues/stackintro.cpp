#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;
    
    //behaviour
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }


    void push(int element){

        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0 && top<size)
            return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
          return true;  
        }
        else{
            return false;
        }
    }


};



int main(){


    Stack st(5);

    st.push(5);
    st.push(6);
    st.push(4);
    st.push(7);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;


    // //creation of stack
    // stack<int> s;

    // //push operation
    // s.push(2);
    // s.push(5);

    // //pop operation
    // s.pop();


    // cout<<"The top element in the stack is : "<<s.top()<<endl;
    
    // if(s.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }

    // else{
    //     cout<<"Stack is not empty"<<endl;
    // }

return 0;

}
