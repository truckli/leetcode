class TrieNode {
public:
	TrieNode() {
		memset(next, 0, sizeof(next));
		isKey = false;
	}
	TrieNode *next[26];
	bool isKey;
};

class WordDictionary {
public:
	WordDictionary() {
		root = new TrieNode();
		root->isKey = true;
	}
    // Adds a word into the data structure.
    void addWord(string word) {
    	TrieNode *p = root;
    	for (auto c : word) {
    		if (!p->next[c-'a']) {
    			p->next[c-'a'] = new TrieNode();
    		}
    		p = p->next[c-'a'];
    	}
    	p->isKey = true;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
    	return _search(word, 0, root);
    }
private:
    TrieNode *root;
    bool _search(string word, int start, TrieNode *p) {
    	if (start == word.size()) return p->isKey;
    	if (word[start] != '.') {
    		if (!p->next[word[start]-'a']) return false;
    		return _search(word, start+1, p->next[word[start]-'a']);
    	}
    	for (auto c = 0; c < 26; ++c) {
    		if (p->next[c] && _search(word, start+1, p->next[c])) return true;
    	}
    	return false;
    }
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");
