class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> suffix(n);
        vector<int> prefix(n);
        suffix[0] = height[0];
        prefix[n - 1] = height[n - 1];

        for(int i = 1; i < n; i++){
            suffix[i] = max(suffix[i - 1], height[i]);
            prefix[n - i - 1] = max(prefix[n - i], height[n - i - 1]);
        }
        
        int water = 0;
        for(int i = 0; i < n; i++){
            water += min(suffix[i], prefix[i]) - height[i]; 
        }

        return water;
    }
};
