class Solution0 { //compare mid and left boundary
public:
    int findMin(vector<int>& nums) {
    	int start = 0, end = nums.size() - 1;
    	while (start < end) {
    		if (nums[start] == nums[end]) {
    			end--;
    			continue;
    		}
    		if (nums[start] < nums[end]) return nums[start];
    		int mid = start + (end - start)/2;
    		if (nums[start] <= nums[mid]) {
    			start = mid + 1;
    		} else {
    			end = mid;
    		}
    	}
    	return nums[start];
    }
};

class Solution { //compare mid and right boundary
public:
    int findMin(vector<int>& nums) {
    	int start = 0, end = nums.size() - 1;
    	while (start < end) {
    		int mid = start + (end - start)/2;
    		if (nums[mid] < nums[end]) {
    			end = mid;
    		} else if (nums[mid] > nums[end]) {
    			start = mid + 1;
    		} else {
    			end--;
    		}
    	}
    	return nums[start];
    }
};

