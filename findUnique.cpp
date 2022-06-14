
//Q:-- You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
//  Note:
// Unique element is always present in the array/list according to the given condition.
// Input Format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains an integer 'N' representing the size of the array/list.

// Second line contains 'N' single space separated integers representing the elements in the array/list.


#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;

    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];


    }
        return ans;
    
}
 // SECOND WAY TO SOLVE THIS PROBLEM

int findUnique(int *arr, int size)
{

    for (int i = 0; i < size; ++i)
    {
        int j = 0;

        for (; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                break;
            }
        }

        if (j == size)
        {
            return arr[i];
        }
    }
}