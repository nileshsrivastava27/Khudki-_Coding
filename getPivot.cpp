#include<iostream>
using namespace std;

 int getPivot(int arr[], int n, int key )
 {
     int s=0;
     int e=n-1;
     int mid=(s+(e-s))/2;

        while(s<e)
        {
            if(arr[mid]==key)
            {
                s=mid+1;
            }

            else(key>arr[mid])
            {
                e = mid;
                
            }
            return s;
            
        }
 }