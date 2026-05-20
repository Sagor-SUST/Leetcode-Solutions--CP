// Problem: 1910. Remove All Occurrences of a Substring
// Difficulty: Medium
// Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// Runtime: 0ms (Beats 100%)

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};