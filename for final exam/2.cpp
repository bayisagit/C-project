#include <iostream>
#include <vector>
using namespace std;
class factor{
public:
    vector<int>bay;
    factor(){};
    void finds(int nec){
        for(int i=1;i<=nec;i++){
            if(nec%i==0){
                bay.push_back(i);
            }
        }
    }
    void disp(int n){
        cout<<"the factor of "<<n<<":";
        for(int i=0;i<bay.size();i++){
            cout<<bay[i]<<" ";
        }
        cout<<endl;

    }
      
};
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    factor factors;
    factors.finds(n);
    factors.disp(n);
    return 0;
}