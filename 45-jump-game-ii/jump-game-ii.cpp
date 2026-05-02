class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, curEnd = 0, far = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            far = max(far, i + nums[i]);
            if(i == curEnd) {
                jumps++;
                curEnd = far;
            }
        }
        return jumps;
    }
};