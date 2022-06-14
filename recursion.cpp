#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}




int power(int n){

    //base class

    if(n==0)
    {
        return 1;
    }

    int smallProblem = power(n-1);
    int largerProblem = 2*smallProblem;

    return largerProblem;
}



void print(int n)
{
    if(n == 0)
    {
        return;
    }
    
    print(n-1);

    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    // cout<<"Answer is : "<<factorial(n)<<endl;
    // int ans = power(n);
    print(n);

return 0;



}