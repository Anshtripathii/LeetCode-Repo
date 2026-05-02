class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    
    void dfs(int i, vector<int>& c, int target) {
        if(target == 0) {
            res.push_back(cur);
            return;
        }
        if(i >= c.size() || target < 0) return;
        
        cur.push_back(c[i]);
        dfs(i, c, target - c[i]);
        cur.pop_back();
        
        dfs(i + 1, c, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(0, candidates, target);
        return res;
    }
};