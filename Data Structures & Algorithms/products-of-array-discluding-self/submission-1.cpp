class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0] = 1;
        for(int i = 0; i < n - 1; i++){
            res[i + 1] = res[i] * nums[i];
        }
        int postfix = 1;
        for(int i = n - 1; i >= 0; i--){
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};
