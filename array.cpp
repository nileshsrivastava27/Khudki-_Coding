#include<iostream>
using namespace std;

int main(){
    


int array[10]= {1,2,3,4,5,7};

int i;


cout<<"5th element on the array is = "<<array[4]<<endl;
cout<<"everything is fine"<<endl;


int fourth[10]={0};

int n=8;
for(i=0;i<=n;i++){

    cout<<fourth[i]<<endl;

}

void printing(int arr[],int size)
{
    cout<<"printing the array"<<endl;

    for(i=0;i<=size;i++){

        cout<<"array is = "<<arr[i]<<endl;
        
    }


}

return 0;

}
