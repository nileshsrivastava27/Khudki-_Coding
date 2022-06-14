#include<iostream>
using namespace std;

void print(int* arr, int size)
{
    cout<<"Size of array : "<<size<<endl;

    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int* arr,int size, int key)
{
    print(arr,size);
     
    if(size==0)
    {
        return false;
    }

    if(arr[0]==key)
    {
        return true;
    }

    int ans = linearSearch(arr+1, size-1, key);
    return ans;
}



int main()
{
    int arr[5]={2,4,6,8,9};
    int size = 5;
    int key = 8;

    
    bool ans = linearSearch(arr, 5,8);
    

    if(ans)
    cout<<"Key is found : "<<key<<endl;

    else{
        cout<<"Key not found"<<endl;
    } 

    return 0;

}