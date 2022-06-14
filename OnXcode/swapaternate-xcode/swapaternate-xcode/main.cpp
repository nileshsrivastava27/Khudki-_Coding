//
//  main.cpp
//  swapaternate-xcode
//
//  Created by Nilesh Srivastava on 13/01/22.
//

#include<iostream>
#include<string>
using namespace std;

int main(){

    int i, size;

    int evn[8]={2,5,6,7,4,9,1,10,};
    int odd[5]={15,4,3,6,7};

    // cout<<"Enter the size of array"<<endl;
    // cin>>size;
    // cout<<"Enter the elements in the array"<<endl;

    //     for(i=0;i<=size;i++){
    //         cin>>swap[i];

    //         swap[]=swapAlter();

    //     }

    swapAlternate(evn, 8);
    printArray(evn, 8);
    
    return 0;

}

        int printArray(int arr[],int n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";

            }cout<<endl;
        }

        int swapAlternate(int arr[], int size)
        {

            for(int i=0;i<size;i+=2)
            {

                    if(i+1<size)
                    {
                        swap(arr[i],arr[i+1]);
                        
                
                    }
            }
        }

