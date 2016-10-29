/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
       if (points.size() < 3) return points.size();

       int n = points.size();
       int result = 2;
       unordered_map<double, int> slope_counts;
       for (int i = 0; i < n-1; ++i) {//lines that pass points[i] and lines that don't
    	   int result_point = 1, overlap = 0;
    	   slope_counts.clear();
    	   for (int j = i+1; j < n; ++j) {
    	      double slope;
    		  if (points[i].x == points[j].x) {
    			  if (points[i].y == points[j].y) {
    				 overlap++;
    				 continue;
    			  } else {
    				  slope = std::numeric_limits<double>::infinity();
    			  }
    		  } else {
    			 slope = (points[j].y - points[i].y)*1.0/(points[j].x - points[i].x);
    		  }
    		  //using a double type as key is a bad idea
    		  if (slope_counts.find(slope) == slope_counts.end()) {
    			  slope_counts[slope] = 2;
    		  } else {
    			  slope_counts[slope]++;
    		  }
    		  result_point = max(result_point, slope_counts[slope]);
    	   }//iterate over all other points

    	   result = max(result, result_point + overlap);

       } //iterate over all points
       return result;
    }
};
