#include <iostream>
#include <vector>
using namespace std;
template <typename T>
int searchs(const vector<T>&rr,T &elt){
    for(int i=0;i<rr.size();i++){
        if(elt==rr[i]){
            return i;
            break;
        }
    }
    return -1;
}
template <typename T>
void sorts(vector<T>& rr){
    for(int i=0;i<rr.size()-1;i++){
        for(int j=i+1;j<rr.size();j++){
            if(rr[i]>rr[j]){
                int temp=rr[i];
                rr[i]=rr[j];
                rr[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"how many number would you have going to enter:";
    cin>>n;
     vector<int> arr(n);
    cout<<"enter the numbers using space:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"enter the element you search for:";
    cin>>element;
    int an=searchs(arr,element);
    if(an==-1){
        cout<<"the element is not found!"<<endl;
    }
    else{
        cout<<"the index of the number you have entered is "<<an<<endl;

    }
    sorts (arr);
    cout<<"the sorted element looks like this:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
