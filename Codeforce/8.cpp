
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIRS"<<endl;
        }
        else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }



    return 0;
}
