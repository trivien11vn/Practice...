#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (map.find(complement) != map.end()) {
                result.push_back(map[complement]);
                result.push_back(i);
                break;
            }

            map[nums[i]] = i;
        }

        return result;
    }
};

int main() {
    vector<int> nums = { 2, 11, 7, 15 };
    int target = 9;

    Solution solution;
    vector<int> indices = solution.twoSum(nums, target);

    if (indices.size() == 2) {
        cout << "Indices: [" << indices[0] << ", " << indices[1] << "]" << endl;
    }
    else {
        cout << "No valid indices found." << endl;
    }

    return 0;
}