//
//  main.cpp
//  binarysearch-scode
//
//  Created by Nilesh Srivastava on 14/01/22.
//

#include<iostream>
using namespace std;


int binarySearch(int arr[], int n, int key){

    int start=0;
    int end=n-1;

    int mid = (start+end)/2;

    while(start<=end){

        if(arr[mid]==key){
            return  mid;

        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }return -1;
}
int main()
{
    int even[6]={2,4,6,8,10,12};
    
    int index = binarySearch(even,6,10);
    cout<<index;

    return 0;

}
