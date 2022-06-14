#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Nilesh");
    q.push("Srivastava");
    q.push("Mohan");

    cout<<"First element of queue => "<<q.front()<<endl;
    q.pop();
    cout<<"First element of queue => "<<q.front()<<endl;
    cout<<"Size of queue => "<<q.size()<<endl;

}