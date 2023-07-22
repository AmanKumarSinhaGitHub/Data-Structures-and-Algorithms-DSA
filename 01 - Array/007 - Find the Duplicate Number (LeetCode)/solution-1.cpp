#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Brute Force Approach 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> cnt;

        // Storing occurrence of each num
        for (auto i : nums) {
            cnt[i]++;
        }

        /*   
        for vector nums = [1,3,4,2,2]

           num -> occurrence
            1  ->  1
            3  ->  1
            4  ->  1
            2  ->  2

        Note : In "cnt" map, i.first are nums, i.second are their occurrence
        */

        // Finding which num occurrence is twice
        for (auto i : cnt) {
            if (i.second > 1) {
                return i.first;
            }
        }   
        return -1;

        // Edge case : [2,2,2,2,2]
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
