#include<iostream>
using namespace std;



int getMax(int num[],int n)
{
    int max= INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];

        }
        
    }
        return max;

}
int getMin(int num[],int n)
{
    int min= INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];

        }
        
    }
        return min;

}


int main()
{


int arr[100];

int size;

cin>>size;

for(int i=0;i<=size;i++)
{
    cin>>arr[i];

}

cout <<"Maximum value of the array is = "<<getMax(arr,size)<<endl;

cout <<"Minimum value of the array is = "<<getMin(arr,size)<<endl;
}