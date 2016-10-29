class Solution0 { //Use bucket sort algorithm and pigeon hole principle
	struct Bucket {
		bool nonempty;
		int minval;
		int maxval;
		Bucket(): nonempty(false), minval(INT_MAX), maxval(INT_MIN) {}
	};
public:
    int maximumGap(vector<int>& nums) {
    	int n = nums.size();
    	if (n < 2) return 0;

    	auto mme = minmax_element(nums.begin(), nums.end());
    	int low = *mme.first, hi = *mme.second;
    	int bucket_gap = max((hi - low) / (n-1), 1);
    	int bucket_count = (hi - low) / bucket_gap + 1;
    	vector<Bucket> buckets(bucket_count);

    	for (auto v : nums) {
    		int bucket_id = (v - low) / bucket_gap;
    		buckets[bucket_id].nonempty = true;
    		buckets[bucket_id].minval = min(v, buckets[bucket_id].minval);
    		buckets[bucket_id].maxval = max(v, buckets[bucket_id].maxval);
    	}

    	int maxgap = 0, curval = low;
    	for (auto bucket : buckets) {
    		if (bucket.nonempty) {
    			maxgap = max(maxgap, bucket.minval - curval);
    			curval = bucket.maxval;
    		}
    	}

    	return maxgap;
    }
};

class Solution { //Use radix sort
public:
	int maximumGap(vector<int>& nums) {
		for(unsigned bit = 0; bit < 31; bit++)
			std::stable_partition(nums.begin(), nums.end(), [bit](int a){
			return !(a & (1 << bit));
		});

		int difference = 0;
		for(std::size_t i = 1; i < nums.size(); i++) {
			difference = std::max(difference, nums[i] - nums[i-1]);
		}
		return difference;
	}
};

