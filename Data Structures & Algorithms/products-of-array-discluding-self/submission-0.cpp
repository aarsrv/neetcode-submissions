class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        for(int i = 0; i < n - 1; i++){
            prefix[i + 1] = prefix[i] * nums[i];
            suffix[n - i - 2] = suffix[n - i - 1] * nums[n - i - 1];
        }

        vector<int> res(n);
        for(int i = 0; i < n; i++){
            res[i] = prefix[i] * suffix[i];
        }

        return res;
    }
};
