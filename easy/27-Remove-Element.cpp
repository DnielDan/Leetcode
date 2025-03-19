/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. 
Then return the number of elements in nums which are not equal to val.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        for(int i{0}; i < nums.size(); i++) {
            if(nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
                length--;
            }
        }
        return length;
    }
};