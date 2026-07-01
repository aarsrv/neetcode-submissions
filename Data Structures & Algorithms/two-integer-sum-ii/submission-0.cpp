class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        int currSum = 0;
        while (left < right){
            currSum = numbers[left] + numbers[right];
            if(currSum == target){
                return {left + 1, right + 1};
            } else if (currSum < target){
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};
