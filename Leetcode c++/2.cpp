#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_indices;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_indices.count(complement)) {
                return {num_indices[complement], i};
            }
            num_indices[nums[i]] = i;
        }

        return {};
    }
};
return 0;
}
