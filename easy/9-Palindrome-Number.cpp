/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }

        int reversed{0};
        int temp = x;
        while(x > 0) {
            reversed = (reversed * 10) + (x % 10);
            x /= 10;
        }
        return reversed == temp;
    }
};