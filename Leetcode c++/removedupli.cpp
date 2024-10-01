#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    int removeduplicates(vector<int>& nums){
        int n=nums.size();
        int k=1;
        for (int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
    return k;
    }
};
int main(){
    solution sol;
    int n;
    cout<<"how many numbers do you want to enter:";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the member of string:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int unique_ele=sol.removeduplicates(nums);
    cout<<"number of unique elements: "<<unique_ele<<endl;
    for(int i=0;i<unique_ele;i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}