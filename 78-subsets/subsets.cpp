class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    
    void dfs(int i, vector<int>& nums) {
        if(i == nums.size()) {
            res.push_back(cur);
            return;
        }
        dfs(i + 1, nums);
        cur.push_back(nums[i]);
        dfs(i + 1, nums);
        cur.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(0, nums);
        return res;
    }
};