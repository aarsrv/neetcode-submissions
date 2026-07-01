class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int maxAmt = 0, currAmt = 0, minHeight = 0;

        while(left < right){
            minHeight = min(heights[left], heights[right]);
            currAmt = (right - left) * minHeight;
            maxAmt = max(maxAmt, currAmt);
            if(minHeight == heights[left]) left++;
            else right--;
        }

        return maxAmt;
    }
};
