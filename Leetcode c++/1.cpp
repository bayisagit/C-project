#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result; // No solution found
    }
};

int main(int argc, char *argv[]) { // Use this main function
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twoSum(nums1, target1);

    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = sol.twoSum(nums2, target2);

    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = sol.twoSum(nums3, target3);

    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}