#include<iostream>
using namespace std;

int insertionSort(int arr[], int n)
{ int temp;
    for(int i=1;i<=n;i++)
    {
        arr[i]= temp;
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;

            }
        }
        arr[j+1]=temp;
    }
}
// function are written in every type of sort and do write the main function before run
// why insertion sort--ANS:- Adaptable and Stable as it arranges in each and every round.