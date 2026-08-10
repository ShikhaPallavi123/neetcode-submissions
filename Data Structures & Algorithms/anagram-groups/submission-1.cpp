class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> result;

        for(int i = 0; i < strs.size(); i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            m[sorted].push_back(strs[i]);
        }

        for(unordered_map<string, vector<string>> :: iterator it = m.begin(); it != m.end(); it++){
            result.push_back(it->second);
        }

    return result;

    }
};
