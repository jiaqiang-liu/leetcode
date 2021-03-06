// Author:JiaQiang Liu。
// Date:2018/5/2

#include<iostream>
using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		int e = x / 2 + 1;
		int s = 0;
		// binary search  判断条件是<= !!
		while (s <= e) {
			int mid = s + (e - s) / 2;
			//防止溢出
			long long sq = (long long)mid*(long long)mid;
			if (sq == x) return mid;
			if (sq < x) {
				s = mid + 1;      
			}
			else {
				e = mid - 1;
			}
		}
		return e;
	}
};

int main()
{
	Solution s;
	cout << s.mySqrt(8);
    return 0;
}

