// Problem: 344. Reverse String
// Difficulty: Easy
// Link: https://leetcode.com/problems/reverse-string/
// Runtime: 0ms | Memory: 27.4MB

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};