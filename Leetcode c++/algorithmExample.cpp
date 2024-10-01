#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int> numbers={1,3,5,2,45,9};
    int maxi_value=*max_element(numbers.begin(),numbers.end());
    cout<<"the maximum element is "<<maxi_value<<"\n";
    int min_value=*min_element(numbers.begin(),numbers.end());
    cout<<"the minimum element is "<<min_value<<'\n';
    int sum=accumulate(numbers.begin(),numbers.end(),0);
    cout<<"the sum of the elements is "<<sum<<'\n';
    return 0;
}

