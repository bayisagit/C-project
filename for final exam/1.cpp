#include <iostream>
    #include <cmath>
    using namespace std;
    double factorial(int n){
        if(n==1 || n==0){
            return 1;
        }
        else {
        return n*factorial(n-1);
        }
    }
    double thesum(int n){
        double e=0.0;
        for (int i=1;i<=n;i++){
            e+=1.0/factorial(i);
        }
        return e;
    }
    int main(){
        int n;
        cout<<"enter the number:";
        cin>>n;
        double ef=thesum(n);
        cout<<"the eularian form of the number is "<<ef<<endl;
        return 0;

    }

