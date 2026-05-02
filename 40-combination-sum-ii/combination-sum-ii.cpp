class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    
    void dfs(int i, vector<int>& c, int target) {
        if(target == 0) {
            res.push_back(cur);
            return;
        }
        for(int j = i; j < c.size(); j++) {
            if(j > i && c[j] == c[j - 1]) continue;
            if(c[j] > target) break;
            cur.push_back(c[j]);
            dfs(j + 1, c, target - c[j]);
            cur.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(0, candidates, target);
        return res;
    }
};