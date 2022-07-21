//Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the 
// queue, leaving the other elements in the same relative order.

// Only following standard operations are allowed on queue.

// enqueue(x) : Add an item x to rear of queue
// dequeue() : Remove an item from front of queue
// size() : Returns number of elements in queue.
// front() : Finds front item.
// Note: The above operations represent the general processings. 
// In-built functions of the respective languages can be used to solve the problem.

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}




// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> s;
    
    
    for(int i=0;i<k;i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    int t = q.size()-k;
    
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
    
    
}