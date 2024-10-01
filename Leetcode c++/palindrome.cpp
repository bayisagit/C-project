#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int m=x;
        long long rev=0;
        while(m!=0){
            int mod=m%10;
            rev=rev*10+mod;
            m/=10;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
        
    }
};
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    Solution sol;
    bool is_palindrome=sol.isPalindrome(x);
    if(is_palindrome){
        cout<<"the number is palindrome!"<<endl;
    }
    else{
        cout<<"the number is not palindrome!"<<endl;
    }
    return 0;
}