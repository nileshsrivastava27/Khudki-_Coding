#include<iostream>
#include<stack>
using namespace std;
                                            //Similar to delete middle element of stack
void solve(stack<int> s, int x){

    //base case 
    if(s.empty()){
    s.push(x);
    }

    int num = s.top();
    s.pop();

    //recurcive call

    solve(s,x);
    s.push(num);

}


stack<int> pushAtBottom(stack<int>& myStack, int x){
    solve(myStack,x);
    return myStack;
} 

int main(){
    return 0;
}