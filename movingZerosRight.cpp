#include<iostream>
#include<vector>
using namespace std;

vector <int> moveZero(vector<int> nums){

    int i=0;

    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=0)
        {swap(nums[j], nums[i]);
        i++;

    }
}
}

void print(vector <int> nums)
{
    for(int i=0;i<=nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }cout<<endl;
}

int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);

vector <int> ans = moveZero(nums);
    print(ans);
    return 0;
}