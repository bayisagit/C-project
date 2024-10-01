#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<"the factorial of "<<n<<" are:";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            sum+=i;
        }
        
    }
    cout<<"\n"<<sum;


    return 0;
}