// Problem: 0011. Container With Most Water
// Difficulty: Medium
// Link: https://leetcode.com/problems/container-with-most-water/description/
// Runtime: 0ms (Beats 100%)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0, rp=height.size()-1;
        while(lp<rp){
            int w= rp-lp;
            int h=min(height[lp], height[rp]);
            int currWater= w* h;
            maxWater= max(maxWater, currWater);
            height[lp]<height[rp]? lp++: rp--;
        }
        return maxWater;
    }
};