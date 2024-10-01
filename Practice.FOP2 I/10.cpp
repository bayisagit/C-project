#include <iostream>
using namespace std;
void read_list(int &n,int lists[]){
   cout<<"how many lists do you want record: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"mark of "<<i+1<<"list: ";
        cin>>lists[i];
    }

}
int find_max(int &n,int lists[],int maxs){
    maxs=0;
    for(int i=0;i<n;i++){
            if(lists[i]>maxs){
                maxs=lists[i];
            }
    }
    return maxs;


}
int find_min(int &n,int lists[],int mins){
    for(int i=1;i<n;i++){
            mins=lists[0];
            if(lists[i]<mins){
                mins=lists[i];
            }
    }
    return mins;
}
int find_range(int &maxs,int &mins,int range){
    range=maxs-mins;
return range;
}
int find_mean(int n,int lists[],int mean){
int sum=0;
    for(int i=0;i<n;i++){

            sum+=lists[i];

    }

    mean=sum/n;
    return mean;
}
int main(){
    int n,lists[50],maxs,mins,range;
    float mean;
    read_list(n,lists);
    maxs=find_max(n,lists,maxs);
    mins=find_min(n,lists,mins);
    range=find_range(maxs,mins,range);
    mean=find_mean(n,lists,mean);
    cout<<"******************************************\n";
    cout<<"display list"<<endl;
    for(int i=0;i<n;i++){
        cout<<lists[i]<<" ";
    }
    cout<<endl;
    cout<<"******************************************\n";
    cout<<"max"<<'\t'<<"min"<<'\t'<<"range"<<'\t'<<"mean"<<endl;
    cout<<"******************************************\n";
    cout<<maxs<<'\t'<<mins<<'\t'<<range<<'\t'<<range<<endl;

    return 0;
}
