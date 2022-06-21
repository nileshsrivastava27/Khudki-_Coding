#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //create queue
    queue<int> q;
    q.push(11);
    cout<<"The front of queue is : "<<q.front()<<endl;
    q.push(15);
    cout<<"The front of queue is : "<<q.front()<<endl;
    q.push(13);
    cout<<"The front of queue is : "<<q.front()<<endl;

    cout<<"The size of the queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"The size of the queue is: "<<q.size()<<endl;



    if(q.empty()){
        cout<<"The queue is empty"<<endl;
    }

    else{
        cout<<"Queue is not empty"<<endl;
    }


return 0;
}