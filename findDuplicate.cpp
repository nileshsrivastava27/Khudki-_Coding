#include<iostream>
using namespace std;


int findDuplicate(int arr[],int brr[] ,int n, int m)
{
    int i;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(arr[i]==brr[j])
            {cout<<arr[i]<<" ";}

        }
    }
    return arr[i];
}

int main()
    {


int arr[10]={1,2,3,4,5,6,7,8,9,10};
int brr[5]={6,7,8,9,12};

cout<<"The duplicates in the two arrays are = "<<findDuplicate(arr,brr,10,5)<<endl;


    }