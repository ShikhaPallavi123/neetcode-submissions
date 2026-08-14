class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) != map.end()){
                map[nums[i]]++;
            }else{
                map[nums[i]] = 1;
            }
        }
            vector<int> result;
            for(int i = 0; i < k; i++){
                
                int maxFreq = 0;
                int maxNum = 0;
            for(unordered_map<int, int> :: iterator it = map.begin(); it != map.end(); it++ ){
                
                if(it->second > maxFreq){
                    maxFreq = it->second;
                    maxNum = it->first;
                }
                
            }
        result.push_back(maxNum);
        map.erase(maxNum);
        
        }


        return result;

    }
};
