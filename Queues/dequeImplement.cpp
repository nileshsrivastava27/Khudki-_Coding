#include<iostream>
#include<queue>
using namespace std;

int main()
{
    deque<int> q;

    q.push_front(12);
    q.push_back(13);
    q.push_front(14);
    q.push_back(15);
    q.push_front(16);
    q.push_back(17);

    cout<<"Front is: "<<q.front()<<endl;

    cout<<"back is: "<<q.back()<<endl;
    

}