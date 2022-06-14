#include<iostream>
using namespace std;

int main(){

    int n,i=2;

    cout<<"Enter the value of n ";
    cin>>n;
    bool isPrime=1;
    for(i=2;i<=n;i++){
        
         if(n%i==0){
        // cout<<"is not a prime no."<<endl;
        isPrime=0;
        break;
         }
                    }

        if(isPrime==0)
        {cout<<"is a not prime no. ";
        }
        else{
            cout<<"is a prime no. ";
        }
    
}

//class Solution {
//     private:
    
//        bool isPrime(int n){
//             if(n<=1){
//                 return false;
//             }
//            for(int i=2;i<n;i++){
//                if(n%i==0)
//                {
//                    return false;
//                }
//            }
//            return true;
//         }
    
         
// public:
//     int countPrimes(int n) {
//     int count = 0;
        
//         for(int i=0;i<n;i++){
//             if(isPrime(i))
//                 count++;
//         }
//   return count;
//     }
    
// };