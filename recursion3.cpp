// #include<iostream>
// using namespace std;

// // void reverse(string&  s, int i, int j)
// // {
// //     cout<<"call recieved for "<<s<<endl;
// //     //base class
// //     if(i>j)
// //     return;

// //     swap(s[i],s[j]);
// //     i++;
// //     j--;

// //     reverse(s, i, j);
// // }



// int main()
// {
//     // string name = "nilesh";

//     // reverse(name, 0, name.length()-1);

//     // cout<<name<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        {return false;}
        
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name = "abcdcba";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}