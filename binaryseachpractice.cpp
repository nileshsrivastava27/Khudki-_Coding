#include<iostream>
using namespace std;

int firstOccerence(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    int ans =-1;

        while(s<=e)
        {
            if(arr[mid]==key)
            {
                ans=mid;
                e=mid-1;
            }

            else if(key<arr[mid])
            {
                e=mid-1;
            }

            else if(key>arr[mid])
            {
                s=mid+1;
            }
        }return ans;
}
int lastOccerence(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    int ans =-1;

        while(s<=e)
        {
            if(arr[mid]==key)
            {
                ans=mid;
                s=mid+1;
            }

            else if(key<arr[mid])
            {
                e=mid-1;
            }

            else if(key>arr[mid])
            {
                s=mid+1;
            }
        }return ans;
}

int main()
{
    int even[6]={1,2,2,3,4,5};

    cout<<"the first occerence of 2 is at index"<<firstOccerence(even,6,2)<<endl;

    return 0;
}