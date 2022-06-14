#include<iostream>
using namespace std;

class Human {

    public:
    int height=176;
    int weight=86;
    int age=20;

     public:

     int getAge(){
         return this-> age;
     }

     int setWeight(int w){
         return this->weight=w;
         
     }
};

class Male: public Human{
    public:
    string color="White";

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }


};


int main()
{
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.color<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    obj1.sleep();

    obj1.setWeight(81);
    cout<<obj1.weight<<endl;
    return 0;
}