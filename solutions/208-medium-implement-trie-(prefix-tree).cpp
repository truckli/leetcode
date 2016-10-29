class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        memset(nexts, 0, sizeof(nexts));
        end = false;
    }
    TrieNode *nexts[26];
    bool end;//indicate a leaf node
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
    	TrieNode *p = root;
    	for (auto c : word) {
    		if (!p->nexts[c-'a']) {
    			p->nexts[c-'a'] = new TrieNode();
    		}
            p = p->nexts[c-'a'];
    	}
    	p->end = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
    	TrieNode *p = root;
    	for (auto c : word) {
    		if (!p->nexts[c-'a']) return false;
    		p = p->nexts[c-'a'];
    	}
    	return p->end;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
    	TrieNode *p = root;
    	for (auto c : prefix) {
    		if (!p->nexts[c-'a']) return false;
    		p = p->nexts[c-'a'];
    	}
    	return true;
    }

private:
    TrieNode* root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");
