class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> res;

        for (int a = 0; a < n-3; a++) {
            for (int b = a + 1; b < n-2; b++) {
                for (int c = b + 1; c < n-1; c++) {
                    for (int d = c + 1; d < n; d++) {
                        if (nums[a] + nums[b] + 0LL + nums[c] + nums[d] == target) {
                            res.insert({nums[a], nums[b], nums[c], nums[d]});
                        }
                    }
                }
            }
        }

        return vector<vector<int>>(res.begin(), res.end());
    }
};