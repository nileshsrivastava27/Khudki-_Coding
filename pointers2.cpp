#include<iostream>
using namespace std;

void update( int *p)
{
    *p = *p+1;
}

void print(int *p)
{
    cout<<p<<endl;
}

int GetSum(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}


int main()
{
    // int arr[10] = {23,122,41,67};

    // cout << "4th " << *arr << endl;
    // cout << "5th " << *arr + 1 << endl;
    // cout << "6th " << *(arr + 1) << endl;           //arr[i]=*(arr+i)
    //                                                     //or
    //                                                     //i[arr]=*(i+arr)
    // cout << "7th " << *(arr) + 1 << endl;
    // cout << "8th " << arr[2] << endl;
    // cout << "9th " << *(arr+2) << endl;

    // int brr[10]={0};
    // cout<<sizeof(brr)<<endl;

    // int *ptr = &brr[0];
    // cout<<sizeof(brr)<<endl;

    int num = 5;
    int *p = &num;
    cout<<"Before update function : "<<*p<<endl;

    update(p);
    cout<<"After update function :"<<*p<<endl;
   
    int arr[5] = {1,2,3,4,5};

    cout<<"The sum is : "<<GetSum(arr, 5)<<endl;

    return 0;
}
