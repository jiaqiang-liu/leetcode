// Author:JiaQiang Liu
// Date:2018/5/2

#include<iostream>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		if (n <= 2)
			return n;
		int pa1 = 1;
		int pa2 = 2;
		for (int i = 3; i <= n; i++) {
			int temp = pa2;
			pa2 = pa1 + pa2;
			pa1 = temp;
		}
		return pa2;
	}
};

int main()
{
    return 0;
}

