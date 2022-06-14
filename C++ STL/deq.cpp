//deq is doubly ended queue

#include<iostream>
#include<deque>
using namespace std;

int main()
{
  deque<int> d;

  d.push_back(1);
 d.push_front(2);
 d.pop_front();



 
  cout<<"Print first index of the array =>"<<d.at(0)<<endl;
}