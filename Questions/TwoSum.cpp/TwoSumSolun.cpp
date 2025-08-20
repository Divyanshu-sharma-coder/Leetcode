class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap; // value -> index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (hashMap.find(complement) != hashMap.end()) {
                return {hashMap[complement], i};
            }

            hashMap[nums[i]] = i;
        }

        // The problem guarantees exactly one solution.
        return {};
    }
};


