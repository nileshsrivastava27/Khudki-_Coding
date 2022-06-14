//
//  main.cpp
//  reversearray-onxcode
//
//  Created by Nilesh Srivastava on 13/01/22.
//

#include<iostream>
using namespace std;


void reverseArray(int array[], int n)
{
   int start = 0;
   int end = n-1;
   
        while(start<=end)
        {
            swap(array[start],array[end]);
            start++;
            end--;

        }
}


void printArray(int array[],int n)
{
    for(int i=0;i<=n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int brr[6]={5,6,7,8,9,10};


    reverseArray(arr,5);
    reverseArray(brr,6);

    printArray(arr,5);
    printArray(brr,6);

   
    
return 0;

}
