class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        vector<int> ans;
        

        for(int i= 0; i < n; i++){
            int first = nums[i];
            int second = target - first;

            if(m.find(second) != m.end()){
                ans.push_back(m[second]);
                ans.push_back(i);
                
                return ans;

            }
            m[first] = i;
        }

        return ans;
    }
};
