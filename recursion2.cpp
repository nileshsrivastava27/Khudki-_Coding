#include<iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout<<"source "<<src<<" destination "<<dest<<endl;

    if(src==dest)
    {
        cout<<"reached"<<endl;
        return;
    }

    src++;

    //recursive call

    reachHome(src, dest);

}

//FIBBONACCI NUMBER IN RECURSION

int fibonacci(int n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    int ans= fibonacci(n-1)+fibonacci(n-2);
return ans;
}

//CLIMBING STAIRS

int countDistinctWayToClimbStair(long long nStairs)
{
    if(nStairs<0)
        return 0;
    
    if(nStairs==0)
        return 1;
    
    int stairs = countDistinctWayToClimbStair(nStairs-1)
        +countDistinctWayToClimbStair(nStairs-2);

    return stairs;
}

int main()
{
    int a = 0;
    int b= 1;
    
    int n;
    cin>>n;

   fibonacci(n);

    return 0;
}