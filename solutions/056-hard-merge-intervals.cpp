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
    vector<Interval> merge(vector<Interval>& intervals) {
       vector<Interval> result;
       int n = intervals.size();
       if (n == 0) return result;
       sort(intervals.begin(), intervals.end(), [](Interval &x, Interval &y) {
    	   return x.start < y.start;
       });
       for (int i = 0; i < n; ) {
    	   int j;
    	   for (j = i+1; j < n; ++j) {
    		   if (intervals[j].start > intervals[i].end) {
    			   break;
    		   }
    		   intervals[i].end = max(intervals[i].end, intervals[j].end);
    	   }
    	   result.push_back(intervals[i]);
    	   i = j;
       }
       return result;
    }
};
