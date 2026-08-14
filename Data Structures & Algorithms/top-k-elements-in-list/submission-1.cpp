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

            vector<vector<int>> bucket(nums.size()+1);
           
            for(unordered_map<int, int> :: iterator it = map.begin(); it != map.end(); it++ ){
                
                   int maxFreq = it->second;
                   int maxNum = it->first;
                   bucket[maxFreq].push_back(maxNum);
                
                
            }
        
            vector<int> result;

            for(int i = nums.size(); i> 0; i--){
                for(int j = 0; j < bucket[i].size(); j++){
                    result.push_back(bucket[i][j]);
                    if(result.size() == k){
                        return result;
                    }
                }
            }
        

        return result;

    }
};
