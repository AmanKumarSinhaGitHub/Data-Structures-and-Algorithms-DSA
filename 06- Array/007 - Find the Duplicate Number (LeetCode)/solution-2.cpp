#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // nums = [1,3,4,2,2]

        // Sort the input vector in ascending order
        sort(nums.begin(), nums.end());
        // nums = [1,2,2,3,4]
        
        // Iterate through the sorted vector to find the duplicate number
        for (int i = 1; i < nums.size(); i++) {

            // Compare the current element with the previous element
            // and If the current element is equal to the previous element, we found the duplicate
            if (nums[i-1] == nums[i]){
                return nums[i];
            }
        }
        
        // If no duplicate is found, return -1
        return -1;
    }
};

int main() {

    Solution solution;
    
    // Test cases
    vector<int> nums1 = {1, 3, 4, 2, 2};
    cout << "Duplicate number in {1, 3, 4, 2, 2} : " << solution.findDuplicate(nums1) << endl;

    vector<int> nums2 = {3, 1, 3, 4, 2};
    cout << "Duplicate number in {3, 1, 3, 4, 2} : " << solution.findDuplicate(nums2) << endl;

    return 0;
}

// Time complexity : O(n)
// Space complexity : O(1)