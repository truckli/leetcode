class LRUCache{
	struct Node {
		int key;
		int value;
		Node(int k, int v): key(k), value(v) {}
	};
	list<Node> recent;
	unordered_map<int, list<Node>::iterator> cache;
	int capacity;
public:
    LRUCache(int capacity) {
    	this->capacity = capacity;
    }
    
    int get(int key) {
    	if (cache.find(key) == cache.end()) {
    		return -1;
    	}

    	recent.splice(recent.begin(), recent, cache[key]);
    	cache[key] = recent.begin();
    	return cache[key]->value;
    }
    
    void set(int key, int value) {
    	if (cache.find(key) != cache.end()) {
    		recent.splice(recent.begin(), recent, cache[key]);
    		cache[key] = recent.begin();
    		cache[key]->value = value;
    		return;
    	}

    	if (cache.size() >= this->capacity) {
    		auto nid = recent.back();
    		cache.erase(nid->key);
    		recent.pop_back();
    	}

    	recent.push_front(Node(key, value));
    	cache[key] = recent.begin();
    }
};
