#include<iostream>
#include<queue>
#include<stack>

using namespace std;
//using stack
void interleaveQueuesSt(queue<int> &q, int n){
    if(q.size()%2!=0)
    {    cout<<"Enter the even number of elements in the queue."<<endl;}

    stack<int> s;

    for(int i=0; i<n/2;i++)
    {
        int val = q.front();
        q.pop();             // function for sending half the queue in the stack
        s.push(val);

    }

    while(!s.empty()){

        int upper = s.top();
        s.pop();             // for sending half the stack element in the back of the queue but reversed
        q.push(upper);
    }


    for(int i=0; i<n/2;i++)
    {
        int val = q.front();
        q.pop();                 //for sending first half of the queue in the back
        q.push(val);

    }


    for(int i=0; i<n/2; i++)
    {
        int val = q.front();
        q.pop();      //for sending the first half to stack(ie that is reversed back in the stack for reversal)
        s.push(val);

    } 

    while(!s.empty()){
        int st = s.top();
        s.pop();
        q.push(st);        // for emptying the stack and placing elements in desired order

        int val = q.front();
        q.pop();
        q.push(val);
    }

    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }

}


void interleaveQueuesQu( queue<int> &q, int n)
{
    queue<int> nq;
    
    for(int i=0; i<n/2; i++)
    {
        int val = q.front();
        q.pop();
        nq.push(val);
    }


    while(!nq.empty()){
        int first = nq.front();
        nq.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }
    
    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }


}


int main()
{
    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);

    interleaveQueuesSt(q,8);
    



}