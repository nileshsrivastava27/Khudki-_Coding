//linear search in 2d array

#include<iostream>
using namespace std;

char linearSearch(int arr[][3], int target)
{
    for(int row=0;row<3;row++)
    {
        for(int column=0;column<3;column++)
        {
            if(arr[row][column]==target)
            {
                return target;
            }
        }
    }
}

int sumRow(int arr[][3],int row,int col)
{int sum = 0;
    for(int row=0;row<3;row++)
    { 
        for(int col =0;col<3;col++)
        {  int sum=0;
            sum= sum+ arr[row][col];
             return sum;
        }
    }
}


int main()
{
    //taking input
    int target;
    int arr[3][3];

    cout<<"Enter the elements of array "<<endl;

    for(int i=0;i<3;i++)
    { 
        for(int j =0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element to be searched"<<endl;
    cin>>target;

    int found = linearSearch(arr,target);

    if(found==target)
    {
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }

    
    int ans = sumRow(arr,3,3);
    cout<<"Print the row sum "<<ans<<endl;
    return 0;

}