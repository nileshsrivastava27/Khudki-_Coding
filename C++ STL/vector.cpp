// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     int basic[3]={1,2,3};
//     array<int,4> a={1,2,3,4};
    
//     int size=a.size();

//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;

//     }

//     cout<<"Element at 2nd index "<<a.at(2)<<endl;
//     cout<<"Empty or not "<<a.empty()<<endl;

//     cout<<"First element "<<a.front()<<endl;
//     cout<<"Last element "<<a.back()<<endl;

// } 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size "<<v.capacity()<<endl;

    cout<<"element at index 2=>"<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

// pop_back funtion remove the last element of the vector
    // cout<<"before popback"<<endl;

    // for(int i: v){
    //     cout<<i<<" ";

    // }
    // cout<<"after pop back"<<endl;
    // v.pop_back();
    // for(int i: v)
    // {
    //     cout<<i<<" ";
    // }
v.clear();
cout<<"size"<<v.size()<<endl;


}