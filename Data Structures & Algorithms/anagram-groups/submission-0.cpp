class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        // Traverse every word
        for (int i = 0; i < strs.size(); i++) {

            // Make a copy of the current word
            string temp = strs[i];

            // Sort the copy
            sort(temp.begin(), temp.end());

            // Store the original word using the sorted word as the key
            mp[temp].push_back(strs[i]);
        }

        // Final answer
        vector<vector<string>> ans;

        // Copy all vectors from the map into the answer
        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
