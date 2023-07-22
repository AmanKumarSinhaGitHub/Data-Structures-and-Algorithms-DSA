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

// Time Complexity: O(n)
// Space Complexity: O(n)

/*
To analyze the time and space complexity of the given code:

Time Complexity:

1. The first loop, where the occurrences of each number are stored in the unordered_map `cnt`, iterates through the entire `nums` vector with 'n' elements. This loop has a time complexity of O(n).

2. The second loop, where we iterate through the `cnt` unordered_map to find the duplicate number, has a time complexity of O(m), where 'm' is the number of unique elements in the `nums` vector. In the worst case, 'm' can be equal to 'n', resulting in a time complexity of O(n).

Thus, the overall time complexity of the `findDuplicate` function is O(n).

Space Complexity:

1. The unordered_map `cnt` is used to store the occurrences of each number in the `nums` vector. In the worst case, if all elements in the `nums` vector are unique, the size of `cnt` will be equal to the size of `nums`, resulting in a space complexity of O(n).

2. Apart from the input `nums` vector and the `cnt` unordered_map, there are no other significant data structures used. Therefore, the overall space complexity is O(n).
*/