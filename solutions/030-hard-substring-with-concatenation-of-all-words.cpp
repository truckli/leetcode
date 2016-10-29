class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (words.size() == 0 || words[0].size() == 0) return result;
        int n = words.size();
        int w = words[0].size();
        int m = n * w;
        unordered_map<string, int> count;
        for (auto word: words) count[word]++;

        for (int i = 0; i + m <= s.size(); i += 1) {
            unordered_map<string, int> unused(count);
            for (int j = 0; j < n; j++) {
                string word = s.substr(i+j*w, w);
                if (count.find(word) != count.end()) unused[word]--;
            }
            auto it = unused.begin();
            while (it != unused.end()) {
                if (it->second != 0) break;
                ++it;
            }
            if (it == unused.end()) result.push_back(i);
        }
        return result;
    }
};
