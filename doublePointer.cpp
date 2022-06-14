#include<iostream>
using namespace std;

int update( int **p)
{
    p = p+1;
    /**p = *p+1;
    **p = **p+1;*/
    return p;
}

int main()
{
    int i = 5;
    int* p =&i;
    int** p2= &p;

    // cout<<endl<<"Everything's is Okay"<<endl<<endl;
    // cout<<"printing p : "<<p<<endl;
    // cout<<"Address of p : "<<&p<<endl;
    // cout<<*p2<<endl;

// cout<<i<<endl;
// cout<<*p<<endl;     //printing value inside each block
// cout<<**p2<<endl;
// cout<<endl<<endl;

// cout<<&i<<endl;
// cout<<p<<endl;      //printing the address of the block
// cout<<*p2<<endl;


cout<<"Before "<<i<<endl;
cout<<"Before "<<p<<endl;
cout<<"Before "<<p2<<endl;


update(p2);

cout<<"After "<<i<<endl;
cout<<"After "<<p<<endl;
cout<<"After "<<p2<<endl;
    
    return 0;









}