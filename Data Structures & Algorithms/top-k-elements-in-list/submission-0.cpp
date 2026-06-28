class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() < k){
            return nums;
        }
    
        unordered_map<int, int> freqMap;
        int maxFreq = 0;
        for(int num : nums){
            freqMap[num]++;
            maxFreq = max(maxFreq, freqMap[num]);
        }

        vector<vector<int>> buckets(maxFreq, vector<int>());
        for (const auto& val : freqMap){
            buckets[val.second - 1].push_back(val.first);
        }

        vector<int> soln;
        for(int i = maxFreq - 1; i > 0; i--){
            for(int n : buckets[i]){
                soln.push_back(n);
                if(soln.size() == k)
                    return soln;
            }
        }
    }
};
