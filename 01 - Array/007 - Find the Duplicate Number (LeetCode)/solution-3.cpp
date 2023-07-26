#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Sets store unique number
        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++){

            // If element is already inserted in set (count==1)
            // That means it is a dublicate number
            if(st.count(nums[i])==1){
                return nums[i];
            }
            else{
                // If element is not already in set, insert it.
                st.insert(nums[i]);
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

// Time complexity = O(n)
// Space complexity = O(n)
// We use a set that may need to store at most "n" elements, leading to a linear space complexity of O(n).