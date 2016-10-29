class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        unordered_map<string, vector<string>> anagram_table;
        for (auto str: strs) {
            string norm = str;
            sort(norm.begin(), norm.end());
            if (anagram_table.find(norm) == anagram_table.end()) {
                anagram_table[norm] = {str};
            } else {
                anagram_table[norm].push_back(str);
            }
        }

        for (auto item : anagram_table) {
            sort(item.second.begin(), item.second.end());
            results.push_back(item.second);
        }
        return results;
    }
};
