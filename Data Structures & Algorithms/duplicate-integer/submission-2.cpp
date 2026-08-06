class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        bool ans = false;

        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                ans = true;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};