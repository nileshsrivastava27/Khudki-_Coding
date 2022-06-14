#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("Srivastava");
    s.push("Mohan");
    s.push("Nilesh");

    cout<<"Top element is=> "<<s.top()<<endl;
   cout<<"Size of string => "<<s.size()<<endl;
   cout<<"Empty or not => "<<s.empty()<<endl;
}