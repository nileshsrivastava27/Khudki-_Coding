#include<iostream>
using namespace std;

class A
{
    public:
    void sayHello() {
        cout<<"Hello Nilesh Srivastava "<<endl;
    }

    void sayHello(string name)
    {
        cout<<"Hello "<<name <<endl;
    }
};



int main()
{
    A a;
    a.sayHello();
    a.sayHello("Narender Mohan");


    return 0;
}