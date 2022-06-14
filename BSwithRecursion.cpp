#include<iostream>
using namespace std;

bool binarySearch(int* arr, int s, int e, int key)
{
    if(s>e)
        return -1;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == key)
        return mid;

    if(arr[mid] < key) 
    {
        return binarySearch(arr, mid+1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid-1, key);
    }
}




bool isSorted( int arr[], int size)
{
    //base case
    if(size==0||size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    
    else
    {
        int ans = isSorted(arr+1, size-1);
        return ans;
    }
}

int getSum(int* arr, int size)
{
    if(size==0)
    return 0;

    if(size==1)
    {
        return 1;
    }

    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0]+ remainingPart;
    return sum;
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size = 6;
    int key = 5;
    // bool ans = isSorted(arr,4);

    // if(ans)
    // {
    //     cout<<"Array is sorted"<<endl;
    // }

    // else{
    //     cout<<"Array is not sorted"<<endl;
    // }

    // int sum = getSum(arr, size);

    // if(sum)
    // {
    //     cout<<"the sum of the array is :"<<sum<<endl;
    // }

    // else 
    // {
    //     cout<<"Sum cannot be found"<<endl;
    // }

   
        cout<<"Key found or not : "<<binarySearch(arr,0,6,5)<<endl;
 
    return 0;

}