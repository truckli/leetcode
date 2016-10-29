/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		vector<Interval> result;
		auto it = intervals.begin();
		for (; it != intervals.end(); ++it) {
			if (it->end >= newInterval.start) break;
			result.push_back(*it);
		}
		//it: lower_bound

		auto jt = it;
		for (; jt != intervals.end(); ++jt) {
		    if (jt->start > newInterval.end) break;
		}
		//jt: upper_bound
		//[it, jt) equal range

		//only it and ji-1 need be considered
		if (it != jt) {
			newInterval.start = min(newInterval.start, it->start);
			newInterval.end = max(newInterval.end, prev(jt)->end);
		}
		result.push_back(newInterval);

		for (; jt != intervals.end(); ++jt) {
			result.push_back(*jt);
		}
		return result;
	}
};

//https://leetcode.com/discuss/30809/my-18ms-c-code-with-explanation
class Solution {
public:
	std::vector<Interval> insert(std::vector<Interval> &intervals, Interval newInterval) {

		auto partial_order =[](const Interval & a, const Interval & b){
			return a.end < b.start;
		};

		auto less = std::lower_bound(intervals.begin(), intervals.end(), newInterval, partial_order);

		auto greater = std::upper_bound(intervals.begin(), intervals.end(), newInterval, partial_order);
		//printf("The index position: %d %d\n", less - intervals.begin(), greater - intervals.begin());
		std::vector<Interval> answer;

		answer.insert(answer.end(), intervals.begin(), less);
		answer.push_back(mergeEqual(less, greater, newInterval));
		answer.insert(answer.end(), greater, intervals.end());
		return answer;
	}

private:

	// Merge the new interval with an array of intervals, all intervals in the
	// array equal with the new interval in terms of the partial order we
	// defined.
	// In other words all of them are overlapped with the new interval.

	Interval mergeEqual(const std::vector<Interval>::iterator & first, const std::vector<Interval>::iterator & last, const Interval &target){

		Interval answer(target);
		if(first < last){
			answer = merge(answer, *first);
			answer = merge(answer, *(last-1));
		}
		return answer;
	}
	// Merge two overlapped intervals.
	Interval merge(const Interval & a, const Interval & b) {
		return Interval(std::min(a.start, b.start), std::max(a.end, b.end));
	}
};
