#include<iostream>
using namespace std;                //Take a note of initializing a pointer. There are two ways of initializing a pointer
                                    //1.  int *ptr = &i;
                                    //2.  int i =8; int *p = 0;  p=&i;

int main()
{   //pointer is created and it point to a garbage location
   /* int i = 5;
    
    int *p = 0;

    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
*/

    int num = 5;
    int a = num;
    a++;

    cout<<num<<endl;

    int *p =&num;
    cout<<num<<endl;
    (*p)++;

    cout<<num<<endl;

    int *q = p;

    cout<<p<<endl;
    cout<<*q<<endl;
    cout<<*p<<endl;
    cout<<num<<endl;
    
    
    return 0;
     
}                                   


// int num = 5;

    // cout<<num<<endl;// pointer stores address

    // cout<<&num<<endl;//hexadecimal format 
    
    // int *ptr = &num;

    // cout<<"Value is : "<<*ptr<<endl;
    // cout<<"Address is : "<<*ptr<<endl;


    // double d = 4.3;
    // double *ptr2 = &d;
    
    // cout<<"Value is : "<<*ptr2<<endl;
    // cout<<"Address is : "<<ptr2<<endl;

    // cout<<"Size of : "<<sizeof(*ptr)<<endl;
    // cout<<"Size of : "<<sizeof(ptr)<<endl;
    // cout<<"Size of : "<<sizeof(&num)<<endl;
