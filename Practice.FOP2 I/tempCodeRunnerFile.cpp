#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    int sqrtn=sqrt(n);
    for(int i=2;i<sqrtn;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void displayprimenumbers(){
    cout<<"prime numbers between 1 and 100: "<<endl;
    for(int i=2;i<=100;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int sumofprimes(int n){
    int sum=0;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            sum+=i;
        }
    }
    return sum;
}
void primefactors(int n){
    cout<<"prime factors of "<<n<<" are: ";
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2){
        cout<<n;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is the prime number!"<<endl;
    }
    else{
        cout<<"the number is not prime!"<<endl;
    }
    displayprimenumbers();
    int sum=sumofprimes(n);
    cout<<"sum of prime numbers between 1 and "<<n<<" is: "<<sum<<endl;
    primefactors(n);
    return 0;
}
