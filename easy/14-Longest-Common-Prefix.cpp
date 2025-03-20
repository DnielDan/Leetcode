/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        // Sorting strings in strs alphabetically 
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];

        string answer = "";
        // Setting m or minimum to first string's length as it cannot be longer than last string
        int m = first.length();
        for(int i{}; i < m; i++) {
            if(first[i] == last[i]) {
                answer += first[i];
            }
            else {
                break;
            }
        }
        return answer;
    }
};