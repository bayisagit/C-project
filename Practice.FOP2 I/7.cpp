#include <iostream>
using namespace std;
void printrightangletriangle(char symbol='*',int length=5){
    for(int i=0;i<length;i++){
        for (int j=0;j<=i;j++){
            cout<<symbol<<" ";
        }
        cout<<endl;
    }
}
int main(){
    char choice;
    char symbol='*' ;
    int length;
    cout<<"would you want to create the rectangle with * sign? y/n: ";
    cin>>choice;
    if(choice =='y' || choice =='Y'){
      printrightangletriangle();
    }
    else if(choice =='n' || choice =='N'){
       cout<<"what would you want to create the rectangle with sign? ";
    cin>>symbol;
    cout<<"in what maximum length: ";
    cin>>length;
    if(length<5){
        cout<<"the length of rectangle should at least 5!";
        return 1;
    }
    printrightangletriangle(symbol,length);
    }
    else
        cout<<"your choice is inappropriate choose it again!"<<endl;
return 0;
}
